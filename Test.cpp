#include "doctest.h"
#include "snowman.hpp"

using namespace std;

#include <string>
using namespace ariel;

TEST_CASE("FIRST TEST") {
    CHECK_THROWS(snowman(33213223));
    CHECK_THROWS(snowman(51322111));
    CHECK_THROWS(snowman(61122313));
    CHECK_THROWS(snowman(11111111));
    CHECK_THROWS(snowman(19221311));
    CHECK_THROWS(snowman(18221311));
    CHECK_THROWS(snowman(42133241));
    CHECK_THROWS(snowman(23302214));
    CHECK_THROWS(snowman(11121111));
    CHECK_THROWS(snowman(11161111));   
    CHECK_THROWS(snowman(13114411));
    CHECK_THROWS(snowman(44123211));
    CHECK_THROWS(snowman(12511111));
    CHECK_THROWS(snowman(11611111));
    CHECK_THROWS(snowman(43412143));
    CHECK_THROWS(snowman(31127111));
    CHECK_THROWS(snowman(11239111));

}
TEST_CASE("SECOND TEST") {
    CHECK(snowman(41114411) ==string("  _\n (.,.) \n ( : ) \n ( : )\n"));
    CHECK(snowman(41114411) == string("  _\n (*)\n (.,.) \n ( : ) \n ( : )\n"));
    CHECK(snowman(42114411) == string("  _\n (...) \n ( : ) \n ( : )\n"));
    CHECK(snowman(14114411) == string("  _\n (. .) \n ( : ) \n ( : )\n"));
    CHECK(snowman(41214411) == string(" ===\n (o,.) \n ( : ) \n ( : )\n"));
    CHECK(snowman(41314411) == string(" ===\n (O,.) \n ( : ) \n ( : )\n"));
}


TEST_CASE("THIRD TEST") {
    CHECK_THROWS(snowman(-23311111));                                     
    CHECK_THROWS(snowman(-12312132)); 
    CHECK_THROWS(snowman(-33351151));                                     
    CHECK_THROWS(snowman(-12315432)); 
}



