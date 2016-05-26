#define BOOST_TEST_MODULE FileReadStreamTest
#include <boost/test/included/unit_test.hpp>

#include <FileReadStream.h>

BOOST_AUTO_TEST_CASE(Test1)
{
    FileReadStream stream;
    BOOST_CHECK(!stream.Read());
}