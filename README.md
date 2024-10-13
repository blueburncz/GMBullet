# GMBullet

> Bullet Physics extension for GameMaker

[![License](https://img.shields.io/github/license/blueburncz/GMBullet)](LICENSE)
[![Discord](https://img.shields.io/discord/298884075585011713?label=Discord)](https://discord.gg/ep2BGPm)

Maintained by: [kraifpatrik](https://github.com/kraifpatrik)

## Table of Contents

* [About](#about)
* [Translating API](#translating-api)
  * [Construtors and destructors](#constructors-and-destructors)
  * [Methods](#methods)
  * [Return values](#return-values)
  * [Public properties](#public-properties)
  * [Operators](#operators)
* [Features](#features)
* [Documentation and help](#documentation-and-help)
* [Building from source](#building-from-source)
* [License](#license)
* [Links](#links)

## About

GMBullet is an extension that exposes
[Bullet physics](https://github.com/bulletphysics/bullet3) functions to
GameMaker. Its goal is not to be a simplification layer, but instead it tries to
match Bullet's API as closely as possible.

## Translating API

Bullet's C++ public API is converted into a C-like code and exposed to GML. This
is how to find a GMBullet equivalent to a Bullet function:

### Constructors and destructors

In GMBullet, these are the class name appended with `_create` or `_destroy`. For
example:

```cpp
// C++
btDiscreteDynamicsWorld* dynamicsWorld = new btDiscreteDynamicsWorld(
    dispatcher, pairCache, constraintSolver, collisionConfiguration);

delete dynamicsWorld;
```

becomes

```gml
// GML
var dynamicsWorld = btDiscreteDynamicsWorld_create(
    dispatcher, pairCache, constraintSolver, collisionConfiguration);

btDiscreteDynamicsWorld_destroy(dynamicsWorld);
```

If a Bullet class/struct has multiple constructors, in GMBullet these are available
as separate functions. For example these are the constructors of `btQuaternion`
available in GMBullet:

```gml
// GML
btQuaternion_create(x, y, z, w);
btQuaternion_createFromAxisAngle(axis, angle);
btQuaternion_createFromEuler(yaw, pitch, roll);
```

If a Bullet class/struct is defined inside of a namespace or another class/struct,
the GMBullet name is just the class/struct name (prepended with `bt`, if missing),
without the namespace. For example, `btCollisionWorld::ClosestRayResultCallback`
becomes just `btClosestRayResultCallback`.

### Methods

In GMBullet, these are the class name appended with underscore, followed by the
method name. The first argument of a method is always a pointer to the class
instance. For example:

```cpp
// C++
btVector3 gravity(0.0, 0.0, -9.8);
dynamicsWorld->setGravity(gravity);
```

becomes

```gml
// GML
var gravity = btVector3_create(0, 0, -9.8);
btDiscreteDynamicsWorld_setGravity(dynamicsWorld, gravity);
btVector3_destroy(gravity);
```

### Return values

Instead of allocating a new class/struct and returning those directly, GMBullet
uses output parameters, appended to the end of the original function. For example:

```cpp
// C++
btVector3 gravity = dynamicsWorld->getGravity();
// Use gravity...
```

becomes

```gml
// GML
var outGravity = btVector3_create();
btDiscreteDynamicsWorld_getGravity(dynamicsWorld, outGravity);
// Use outGravity...
btVector3_destroy(outGravity);
```

### Public properties

Public properties of classes/structs in Bullet are exposed via getters and setters
in GMBullet. For example for `m_hitPointWorld` of `btClosestRayResultCallback`,
there's a getter `btClosestRayResultCallback_getHitPointWorld`.

### Operators

**Operator overloads are currently not exposed in GMBullet!** (But when they're
added, they are most likely going t be `_add`, `_sub`, `_mul` and `_div`,
appended to the class/struct name.)

## Features

* [x] Collision world
* [ ] Collision shapes
  * [x] Box
  * [x] Sphere
  * [x] Capsule
  * [x] Cone
  * [ ] Convex hull (🛑 TODO)
  * [x] Cylinder
  * [x] Compound
  * [ ] Plane (🛑 TODO)
  * [ ] Triangle mesh
    * [ ] For dynamic colliders (🛑 TODO)
    * [x] For static colliders
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
* [x] Ray test
* [x] Sweep test
* [x] Contact tests
* [ ] Debug draw
  * [x] In-memory (copy to vertex buffer, submit from GM; slow)
  * [ ] OpenGL 2 (🛑 TODO)
  * [ ] D3D11 (🛑 TODO)
* [ ] Soft body (🚧 WIP)
* [ ] Multithreading (🛑 TODO)

## Documentation and help

Bullet itself is quite poorly documented and I myself am no Bullet guru, so the
absolute most of the GMBullet documentation was generated from source code using
[ChatGPT 3.5](https://chat.openai.com). For the most part, it seems quite good,
but sometimes it looks like complete BS. But hey, it's better than nothing! The
best way to learn Bullet remains to be using
[examples](https://github.com/bulletphysics/bullet3/tree/master/examples)
included in the official repo. In case you need help with GMBullet, you can join
the [BlueBurn Discord server](https://discord.gg/ep2BGPm), where I will try to
do my best to answer your questions. This repo also contains a sample GM project
to help you get started.

## Building from source

Requires [CMake](https://cmake.org) version 3.23 or newer!

```sh
# Clone the repo, including submodules
git clone https://github.com/blueburncz/GMBullet.git --recurse-submodules

# Build Bullet
cd GMBullet/bullet3
mkdir build
cd build
cmake .. -DUSE_DOUBLE_PRECISION=ON
cmake --build . --config=Release

# Build GMBullet
cd ../../
mkdir build
cd build
cmake ..
cmake --build . --config=Release
```

## License

Based on Bullet Physics extension for GameMaker: Studio 1.4 by Okapi, available
from <https://drive.google.com/file/d/1AAn1PfZ8EDkCkJXNkaKyOkp5eJdx2bcM/view>
under "Finish it, learn from it, do whatever the hell you want" license. Further
modifications to the library are available under the MIT license.
See [LICENSE](LICENSE) for the full license text.

## Links

* [Bullet 3](https://github.com/bulletphysics/bullet3)
* [BlueBurn Discord](https://discord.gg/ep2BGPm)
* [ChatGPT](https://chat.openai.com)
* [Original project](https://drive.google.com/file/d/1AAn1PfZ8EDkCkJXNkaKyOkp5eJdx2bcM/view) by Okapi
