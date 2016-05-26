set (TARGET ReadStream.Static)

source_group("source" FILES ${SOURCE_FILES})
source_group("include" FILES ${HEADER_FILES})

add_library(${TARGET} STATIC ${SOURCE_FILES} ${HEADER_FILES})

target_include_directories(${TARGET} PUBLIC ${CMAKE_SOURCE_DIR}/include)