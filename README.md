# GMBullet
> Bullet Physics extension for GameMaker

[![License](https://img.shields.io/github/license/blueburncz/GMBullet)](LICENSE)
[![Discord](https://img.shields.io/discord/298884075585011713?label=Discord)](https://discord.gg/ep2BGPm)

Maintained by: [kraifpatrik](https://github.com/kraifpatrik)

# Table of Contents
* [About](#about)
* [Features](#features)
* [Documentation and help](#documentation-and-help)
* [Building from source](#building-from-source)
* [License](#license)
* [Links](#links)

# About
GMBullet is an extension that exposes
[Bullet physics](https://github.com/bulletphysics/bullet3) functions to
GameMaker. Its goal is not to be a simplification layer, but instead it tries to
match Bullet's API as closely as possible.

Bullet's C++ public API is converted into a C-like code and exposed to GML. For
example, instances of classes/structs are created with `btClass_create` and
freed from memory with `btClass_destroy`. If there's a class
`btDiscreteDynamicsWorld` with a method `addRigidBody(body)`, this becomes
`btDiscreteDynamicsWorld_addRigidBody(world, body)`. Classes and structs within
a namespace become just the class/struct name prepended with `bt`, e.g.
`btCollisionWorld::ClosestRayResultCallback` becomes `btClosestRayResultCallback`.
For public members of classes/structs there are getter and setter functions, e.g.
for member `m_hitPointWorld` of `btClosestRayResultCallback`, there is a getter
`btClosestRayResultCallback_getHitPointWorld` (the `m_` prefix is always omitted).
In some cases, there are convenience functions like
`btClass_getSomethingArray(class, outArray)` or `btClass_createXYZ(x, y, z)`, so
you don't have to create temporary vectors to retrieve data or pass data to
functions.

# Features
* [x] Collision world
* [ ] Collision shapes
  * [x] Box
  * [x] Sphere
  * [x] Capsule
  * [x] Cone
  * [x] Cylinder
  * [x] Compound
  * [x] Triangle mesh
  * [x] Heightfield terrain
* [x] Collision objects
* [x] Discrete dynamics world
* [x] Rigid body
* [ ] Constraints
  * [x] ConeTwist
  * [x] Fixed
  * [x] Gear
  * [x] Generic6Dof
  * [x] Generic6DofSpring2
  * [x] Generic6DofSpring
  * [x] Hinge2
  * [x] Hinge
  * [x] Point2Point
  * [x] Slider
  * [x] Typed
  * [x] Universal
* [ ] Actions
  * [x] Raycast vehicle
* [x] Raycasting
* [x] Sweep tests 
* [ ] Debug draw
  * [x] In-memory (copy to vertex buffer, submit from GM; slow)
  * [ ] OpenGL 2 (🛑 TODO)
  * [ ] D3D11 (🛑 TODO)
* [ ] Soft body (🚧 WIP)
* [ ] Multithreading (🛑 TODO)

# Documentation and help
Bullet itself is quite poorly documented and I myself am no Bullet guru, so the
absolute most of the GMBullet documentation was generated from source code using
[ChatGPT 3.5](https://chat.openai.com). For the most, part it seems quite good,
but sometimes it looks like complete BS. But hey, it's better than nothing! The
best way to learn Bullet remains to be using
[examples](https://github.com/bulletphysics/bullet3/tree/master/examples)
included in the official repo. In case you need help with GMBullet, you can join
the [BlueBurn Discord server](https://discord.gg/ep2BGPm), where I will try to
do my best to answer your questions. This repo also contains a sample GM project
to help you get started.

# Building from source
Requires [CMake](https://cmake.org) version 3.23 or newer!

```sh
# Clone the repo, including submodules
git clone https://github.com/blueburncz/GMBullet.git --recurse-submodules

# Build Bullet
cd GMBullet/bullet3
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
* [BlueBurn Discord](https://discord.gg/ep2BGPm)
* [ChatGPT](https://chat.openai.com)
* [Original project](https://drive.google.com/file/d/1AAn1PfZ8EDkCkJXNkaKyOkp5eJdx2bcM/view) by Okapi
