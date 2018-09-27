//
// Created by Greg on 2018-09-26.
//

#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() put this in one cpp file
#include "catch.hpp"
#include "stack.hpp"

TEST_CASE("A new stack is empty", "[stack")
{
    stack tester;
    REQUIRE(tester.empty() == true);
    REQUIRE(tester.full() == false);
}