cmake_minimum_required (VERSION 2.8)
cmake_policy(VERSION 2.8)
project(valatest)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/vala )


set(LIBRARY_OUTPUT_PATH /usr/lib)

find_package(PkgConfig)
pkg_check_modules(DEPS REQUIRED gee-1.0 gio-unix-2.0 gthread-2.0 glib-2.0)
set(CFLAGS
    ${DEPS_CFLAGS} ${DEPS_CFLAGS_OTHER}
)
set(LIB_PATHS
    ${DEPS_LIBRARY_DIRS}
)
link_directories(${LIB_PATHS})

add_definitions(${CFLAGS})

vala_precompile(VALA_C
    assertion.vala
    testcase.vala
PACKAGES
    gee-1.0
    gio-unix-2.0
    glib-2.0
    posix
OPTIONS
    --thread
GENERATE_VAPI
    /usr/share/vala/vapi/test-lib
GENERATE_HEADER
    /usr/include/test-lib
)

add_library(test-lib ${VALA_C})
