//
// Created by Greg on 2018-09-26.
//

#define SAMPLE_VALUES {2, 5, 12, 10, 1, 6, 23, 0, 92, 13}
#define LAST_VALUE 13
#define THIRD_LAST_VALUE 0
#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() put this in one cpp file
#include "catch.hpp"
#include "stack.hpp"

TEST_CASE("A new stack is empty", "[stack]") {
    stack tester;
    REQUIRE(tester.empty() == true);
    REQUIRE(tester.full() == false);
}

TEST_CASE("Fill stack", "[stack]") {

    stack tester;
    int values[] = SAMPLE_VALUES;

    for(int i = 0; i < sizeof(values)/sizeof(*values); i++) {
        tester.push(values[i]);
    }

    REQUIRE(tester.full() == true);
    REQUIRE(tester.top() == LAST_VALUE);

    tester.print();
}

TEST_CASE("Pop test", "[stack]") {

    stack tester;
    int values[] = SAMPLE_VALUES;

    for(int i = 0; i < sizeof(values)/sizeof(*values); i++) {
        tester.push(values[i]);
    }

    tester.pop();
    tester.pop();

    REQUIRE(tester.top() == THIRD_LAST_VALUE);

    tester.print();
}