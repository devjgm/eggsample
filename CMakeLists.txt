cmake_minimum_required(VERSION 3.10)
project(eggsample CXX)

# Common settings that should be linked into all targets
add_library(project-settings INTERFACE)
target_compile_features(project-settings INTERFACE cxx_std_14)
target_include_directories(project-settings INTERFACE ${PROJECT_SOURCE_DIR})

include(CTest)

add_subdirectory(src)
