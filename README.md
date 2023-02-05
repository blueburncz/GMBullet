# GMBullet
> Bullet Physics extension for GameMaker

[![License](https://img.shields.io/github/license/blueburncz/GMBullet)](LICENSE)
[![Discord](https://img.shields.io/discord/298884075585011713?label=Discord)](https://discord.gg/ep2BGPm)

# Building
Requires [CMake](https://cmake.org) version 3.23 or newer!

```sh
# Clone the repo, including submodules
git clone https://github.com/blueburncz/GMBullet.git --recurse-submodules

# Build Bullet
cd GMBullet
cd bullet3
mkdir build
cd build
cmake ..
cmake --build . --config=Release

# Build GMBullet
cd ../../
mkdir build
cd build
cmake ..
cmake --build . --config=Release
```

# License
Based on Bullet Physics extension for GameMaker: Studio 1.4 by Okapi, available
from https://drive.google.com/file/d/1AAn1PfZ8EDkCkJXNkaKyOkp5eJdx2bcM/view
under "Finish it, learn from it, do whatever the hell you want" license. Further
modifications to the library are available under the MIT license.
See [LICENSE](LICENSE) for the full license text.

# Links
* [Bullet 3](https://github.com/bulletphysics/bullet3)
