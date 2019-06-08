cmake_minimum_required(VERSION 3.5)
project(MWE)

link_directories( ~/tools/onnx/.setuptools-cmake-build/ )
list(APPEND MWE_INCLUDE_DIRS PUBLIC ~/tools/onnx/)
list(APPEND MWE_INCLUDE_DIRS PUBLIC ~/tools/onnx/.setuptools-cmake-build)
list(APPEND MWE_LINKER_LIBS PUBLIC onnx_proto protobuf pthread)

add_definitions(-DONNX_ML=1 -DONNX_NAMESPACE=onnx)

add_subdirectory(src)
