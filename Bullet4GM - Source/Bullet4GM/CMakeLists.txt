cmake_minimum_required(VERSION 3.23)

project(GMBullet)

set(CMAKE_CXX_STANDARD 17)

set(SOURCES
    src/gmapi/gm_Body.cpp
    src/gmapi/gm_Main.cpp
    src/gmapi/gm_Shape.cpp
    src/gmapi/gm_Transform.cpp
    src/gmapi/gm_World.cpp
    src/gmb/core/World.cpp
    src/gmb/gmb.cpp
    )

set(PATH_BULLET "${CMAKE_CURRENT_SOURCE_DIR}/../Dependencies/bullet3")
set(PATH_BULLET_LIB "${PATH_BULLET}/build/src/")
set(PATH_BULLET_INCLUDE "${PATH_BULLET}/src/")

find_library(LIBBULLETCOLLISION
    NAMES BulletCollision
    PATHS "${PATH_BULLET_LIB}/BulletCollision/")

find_library(LIBBULLETDYNAMICS
    NAMES BulletDynamics
    PATHS "${PATH_BULLET_LIB}/BulletDynamics/")

find_library(LIBLINEARMATH
    NAMES LinearMath
    PATHS "${PATH_BULLET_LIB}/LinearMath/")

add_library(GMBullet SHARED ${SOURCES})

target_include_directories(GMBullet PRIVATE src/ ${PATH_BULLET_INCLUDE})

target_link_libraries(GMBullet
    ${LIBBULLETCOLLISION}
    ${LIBBULLETDYNAMICS}
    ${LIBLINEARMATH}
    )

set(PATH_DATAFILES "${CMAKE_CURRENT_SOURCE_DIR}/../../GMBullet_Example/datafiles")

message(${PATH_DATAFILES})

add_custom_command(
    TARGET GMBullet POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
        $<TARGET_FILE:GMBullet>
        "${PATH_DATAFILES}"
        )
