cmake_minimum_required(VERSION 3.23)

project(GMBullet)

set(CMAKE_CXX_STANDARD 17)

set(SOURCES
    src/GMBullet/dllmain.cpp
    src/GMBullet/exports.cpp
    src/GMBullet/World.cpp
    )

set(PATH_BULLET "${CMAKE_CURRENT_SOURCE_DIR}/bullet3")
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

add_library(${PROJECT_NAME} SHARED ${SOURCES})

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
