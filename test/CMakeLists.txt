set (TARGET ReadStream.Test)

file (GLOB TEST_SOURCE_FILES *.cpp)
source_group("tests" FILES ${TEST_SOURCE_FILES})

add_executable(${TARGET} ${TEST_SOURCE_FILES})

target_include_directories(${TARGET} PUBLIC ${CMAKE_SOURCE_DIR}/include
                                            ${Boost_INCLUDE_DIR})

target_link_libraries(${TARGET} ReadStream.Static ${Boost_LIBRARIES})