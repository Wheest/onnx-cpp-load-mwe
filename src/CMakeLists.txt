include_directories(${MWE_INCLUDE_DIRS})

add_executable(main main.cpp)
target_link_libraries(main ${MWE_LINKER_LIBS})
