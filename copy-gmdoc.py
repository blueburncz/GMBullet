import os
import re
import json5

docs = []

src_dir = os.path.join("src", "GMBullet")
for fname in os.listdir(src_dir):
    if not fname.startswith("exports_"):
        continue
    fpath = os.path.join(src_dir, fname)
    print("Parsing file", fpath)
    docs_current = ""
    with open(fpath) as f:
        prev_arg = None
        func_name = None
        arg_list = []
        arg_index = 0
        line_number = 0
        for line in f.readlines():
            line_number += 1

            # Get function name and args in GMDoc
            m = re.match(r"/// @func (\w+)\((.*)\)", line)
            if m:
                func_name = m.group(1)
                arg_list = m.group(2).split(",")
                for i in range(len(arg_list)):
                    arg_list[i] = arg_list[i].replace("[", "").replace("]", "").strip()
                arg_list = [a for a in arg_list if a]

            m = re.match(r"/// @param {[^}]+} \[?(\w+)\]?", line)
            if m:
                if arg_index >= len(arg_list):
                    print(f"ERROR: {fpath}:{line_number} : Wrong argument number in docs {arg_index + 1}/{len(arg_list)}")
                    exit()
                if m.group(1) != arg_list[arg_index]:
                    print(f"ERROR: {fpath}:{line_number} : Inconsistent argument name {arg_list[arg_index]}/{m.group(1)}")
                    exit()
                arg_index += 1

            # Check if actual function name matches
            if func_name is not None:
                m = re.match(r"YYEXPORT void (\w+)", line)
                if m:
                    if m.group(1) != func_name:
                        print(f"ERROR: {fpath}:{line_number} : Inconsistent function name {func_name}/{m.group(1)}")
                        exit()
                    func_name = None
                    if arg_index != len(arg_list):
                        print(f"ERROR: {fpath}:{line_number} : Wrong argument number in docs {arg_index}/{len(arg_list)}")
                        exit()
                    arg_list = []
                    arg_index = 0

            # Check if argument indices are correct
            m = re.findall(r"arg[,\[] ?(\d+)", line)
            if m:
                current = int(m[0])
                if prev_arg is not None:
                    if current != prev_arg + 1:
                        print(f"ERROR: {fpath}:{line_number} : Invalid argument number {current}, expected {prev_arg + 1}")
                        exit()
                prev_arg = current
            else:
                prev_arg = None

            # Check if arguments use the correct YYGet* function for their type
            m = re.findall(r"\t(.*) \w+ = .*YYGet(\w+)", line)
            if m:
                m = m[0]
                if (m[0] == "bool" and m[1] != "Bool") or \
                    (m[0] == "btScalar" and m[1] != "Real") or \
                    (m[0] == "double" and m[1] != "Real") or \
                    (m[0] == "int" and m[1] != "Int32") or \
                    (m[0] == "auto" and m[1] != "Ptr") or \
                    (m[0] == "auto&" and m[1] != "Ptr"):
                    print(f"ERROR: {fpath}:{line_number} : Inconsistent argument type {m[0]}/{m[1]}")
                    exit()

            if line.startswith("///") and not line.startswith("////"):
                docs_current += line
            elif docs_current != "":
                docs.append(docs_current)
                docs_current = ""
    if docs_current != "":
        docs.append(docs_current)

ext_path = os.path.join("extensions", "GMBullet", "GMBullet.yy")
with open(ext_path) as f:
    ext_str = f.read()
    ext_json = json5.loads(ext_str)

functions = []
order = []
total = 0

for d in docs:
    m = re.findall(r"/// @func (\w+)([^\n]+)", d)[0]
    func_name = m[0]
    args = m[1]
    print("Injecting function", func_name)

    functions.append({
      "resourceType": "GMExtensionFunction",
      "resourceVersion": "1.0",
      "name": func_name,
      "argCount": 0,
      "args": [],
      "documentation": d,
      "externalName": "",
      "help": f"{func_name}{args}",
      "hidden": False,
      "kind": 1,
      "returnType": 1
    })

    order.append({
      "name": func_name,
      "path": "extensions/GMBullet/GMBullet.yy"
    })

    total += 1

for f in ext_json["files"]:
    if f["filename"] == "libGMBullet.dylib":
        f["functions"] = functions
        f["order"] = order
        break

with open(ext_path, "w") as f:
    json5.dump(ext_json, f, quote_keys=True, indent=2)

print("Total:", total)
