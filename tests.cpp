#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <catch2/catch_test_macros.hpp>

TEST_CASE( "stupid/1=2", "Prove that one equals 2" ) {
    int one = 1;
    REQUIRE( one == 2 );
}

