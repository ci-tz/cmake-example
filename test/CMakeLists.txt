cmake_minimum_required(VERSION 3.10)

include(GoogleTest)

# Search for all test files
file(GLOB_RECURSE TEST_SOURCES "${PROJECT_SOURCE_DIR}/test/*/*test.cpp")

# #####################################################################################################################
# MAKE TARGETS
# #####################################################################################################################

# #########################################
# "make check-tests"
# #########################################
add_custom_target(build-tests COMMAND ${CMAKE_CTEST_COMMAND} --show-only)
add_custom_target(check-tests COMMAND ${CMAKE_CTEST_COMMAND} --verbose)


# #########################################
# "make XYZ_test"
# #########################################
foreach (test_source ${TEST_SOURCES})
    # Create a human readable name.
    get_filename_component(test_filename ${test_source} NAME)
    string(REPLACE ".cpp" "" test_name ${test_filename})

    # Create the test executable
    add_executable(${test_name} ${test_source})

    # Link the test executable with the main library and the Google Test libraries
    target_link_libraries(${test_name} PRIVATE learn_cmake gtest gtest_main)

    # Add the test to CTest
    gtest_discover_tests(${test_name})
    
    # Add the test to the build-tests and check-tests targets
    add_dependencies(build-tests ${test_name})
    add_dependencies(check-tests ${test_name})
endforeach()