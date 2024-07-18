add_subdirectory(part1)
add_subdirectory(part2)
add_subdirectory(part3)

add_library(learn_cmake STATIC ${ALL_OBJECT_FILES})

set(LEARN_CMAKE_LIBS
        learn_cmake_part1
        learn_cmake_part2
        learn_cmake_part3)

find_package(Threads REQUIRED)

set(LEARN_CMAKE_THIRDPARTY_LIBS
        Threads::Threads)

target_link_libraries(
        learn_cmake 
        ${LEARN_CMAKE_LIBS} 
        ${LEARN_CMAKE_THIRDPARTY_LIBS})

target_include_directories(
        learn_cmake PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)