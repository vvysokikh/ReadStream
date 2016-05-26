cmake_minimum_required(VERSION 3.0)
project (ReadStream)

set(Boost_USE_MULTITHREADED   ON)
set(Boost_USE_STATIC_LIBS   ON)
find_package(Boost REQUIRED COMPONENTS
	unit_test_framework
)

file (GLOB SOURCE_FILES source/*.cpp)
file (GLOB HEADER_FILES include/*.h)

add_subdirectory(source)
add_subdirectory(test)