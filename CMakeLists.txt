cmake_minimum_required(VERSION 3.23)

project(GMBullet)

set(CMAKE_CXX_STANDARD 17)

set(SOURCES
    src/GMBullet/dllmain.cpp
    src/GMBullet/exports.cpp
    src/GMBullet/World.cpp
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
