add_executable(${PROJECT_NAME} main.cpp)

    target_link_libraries(${PROJECT_NAME}
                            lib)

if(NOT(${WIN32}) AND NOT (${UNIX})) # Is Target Pico? 
    # pull in common dependencies
    target_link_libraries(${PROJECT_NAME} pico_stdlib )

    # create map/bin/hex/uf2 file etc.
    pico_add_extra_outputs(${PROJECT_NAME})
endif() # (NOT(${WIN32}) AND NOT (${UNIX})) 

add_subdirectory(lib)
