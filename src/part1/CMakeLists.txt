add_library(
    learn_cmake_part1
    OBJECT
    print_goodbye.cpp
    print_hello.cpp
)

set(ALL_OBJECT_FILES
        ${ALL_OBJECT_FILES} $<TARGET_OBJECTS:learn_cmake_part1>
        PARENT_SCOPE)