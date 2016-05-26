file (GLOB SOURCE_FILES *.cpp)
file (GLOB HEADER_FILES *.h)

source_group("source" FILES ${SOURCE_FILES})
source_group("include" FILES ${HEADER_FILES})

add_library(ReadStream ${SOURCE_FILES} ${HEADER_FILES})
