add_library(
    learn_cmake_part2
    OBJECT
    lib_two.cpp
)

set(ALL_OBJECT_FILES
        ${ALL_OBJECT_FILES} $<TARGET_OBJECTS:learn_cmake_part2>
        PARENT_SCOPE)