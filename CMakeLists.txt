cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(test_hdf5)

include_directories(include)

add_executable(test_hdf5_wrapper src/test_hdf5_wrapper src/hdf5_wrapper.cpp)
target_link_libraries(test_hdf5_wrapper hdf5 hdf5_cpp)
