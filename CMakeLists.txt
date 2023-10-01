cmake_minimum_required(VERSION 3.23)

project(GMBullet)

set(CMAKE_CXX_STANDARD 17)

set(SOURCES
    src/GMBullet/dllmain.cpp
    src/GMBullet/exports_btBoxShape.cpp
    src/GMBullet/exports_btCapsuleShape.cpp
    src/GMBullet/exports_btClosestNotMeRayResultCallback.cpp
    src/GMBullet/exports_btCollisionDispatcher.cpp
    src/GMBullet/exports_btCollisionObject.cpp
    src/GMBullet/exports_btCollisionShape.cpp
    src/GMBullet/exports_btCollisionWorld.cpp
    src/GMBullet/exports_btConeShape.cpp
    src/GMBullet/exports_btCylinderShape.cpp
    src/GMBullet/exports_btDbvtBroadphase.cpp
    src/GMBullet/exports_btDefaultCollisionConfiguration.cpp
    src/GMBullet/exports_btDefaultMotionState.cpp
    src/GMBullet/exports_btDiscreteDynamicsWorld.cpp
    src/GMBullet/exports_btHeightfieldTerrainShape.cpp
    src/GMBullet/exports_btQuaternion.cpp
    src/GMBullet/exports_btRigidBody.cpp
    src/GMBullet/exports_btSequentialImpulseConstraintSolver.cpp
    src/GMBullet/exports_btSphereShape.cpp
    src/GMBullet/exports_btTransform.cpp
    src/GMBullet/exports_btVector3.cpp
    )

set(PATH_BULLET "${CMAKE_CURRENT_SOURCE_DIR}/bullet3")
set(PATH_BULLET_BUILD "${PATH_BULLET}/build")
set(PATH_BULLET_INCLUDE "${PATH_BULLET}/src")

find_library(LIBBULLETCOLLISION
    NAMES BulletCollision
    PATHS ${PATH_BULLET_BUILD}
    PATH_SUFFIXES "src/BulletCollision/" "lib/Release/"
    NO_CACHE
    REQUIRED
    NO_DEFAULT_PATH
    )

find_library(LIBBULLETDYNAMICS
    NAMES BulletDynamics
    PATHS ${PATH_BULLET_BUILD}
    PATH_SUFFIXES "src/BulletDynamics/" "lib/Release/"
    NO_CACHE
    REQUIRED
    NO_DEFAULT_PATH
    )

find_library(LIBLINEARMATH
    NAMES LinearMath
    PATHS ${PATH_BULLET_BUILD}
    PATH_SUFFIXES "src/LinearMath/" "lib/Release/"
    NO_CACHE
    REQUIRED
    NO_DEFAULT_PATH
    )

add_library(${PROJECT_NAME} SHARED ${SOURCES})

if(WIN32)
    add_definitions(-DOS_Windows)
endif()

set_property(TARGET ${PROJECT_NAME} PROPERTY
  MSVC_RUNTIME_LIBRARY "MultiThreaded")

target_include_directories(${PROJECT_NAME} PRIVATE include/
    ${PATH_BULLET_INCLUDE}
    )

target_link_libraries(${PROJECT_NAME}
    ${LIBBULLETCOLLISION}
    ${LIBBULLETDYNAMICS}
    ${LIBLINEARMATH}
    )

add_custom_command(
    TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
        $<TARGET_FILE:${PROJECT_NAME}>
        ${CMAKE_CURRENT_SOURCE_DIR}/extensions/${PROJECT_NAME}/
        )
