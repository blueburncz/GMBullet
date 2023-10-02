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
        for line in f.readlines():
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

for f in ext_json["files"]:
    if f["filename"] == "libGMBullet.dylib":
        f["functions"] = functions
        f["order"] = order
        break

with open(ext_path, "w") as f:
    json5.dump(ext_json, f, quote_keys=True, indent=2)
