
#----------------------------------------------------------------------------
# Do not edit the lines below 

add_executable(${EXECUTABLE_NAME} main.cpp)

    target_link_libraries(${EXECUTABLE_NAME}
                            lib)

add_subdirectory(lib)
