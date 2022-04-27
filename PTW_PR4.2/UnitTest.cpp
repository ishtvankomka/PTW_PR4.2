#define CATCH_CONFIG_MAIN
#include "catch.h"
#include "Functions.cpp"
#include "Functions.hpp"

TEST_CASE( "Arguments initialized") {
    string a = "bdjdjdj djdj idj b bbb";
    string b = "okok";
    string c = "b ddggd\nb kdkdkb";

    REQUIRE( count_b(a) == 3);
    REQUIRE( count_b(b) == 0);
    REQUIRE( count_b(c) == 2);
}
