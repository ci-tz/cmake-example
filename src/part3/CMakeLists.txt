add_library(
    learn_cmake_part3
    OBJECT
    lib_three.cpp
)

set(ALL_OBJECT_FILES
        ${ALL_OBJECT_FILES} $<TARGET_OBJECTS:learn_cmake_part3>
        PARENT_SCOPE)