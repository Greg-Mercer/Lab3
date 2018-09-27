//
// Created by Greg on 2018-09-26.
//

#define SAMPLE_VALUES {2, 5, 12, 10, 1, 6, 23, 0, 92, 13}
#define LAST_VALUE 13
#define THIRD_LAST_VALUE 0
#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() put this in one cpp file
#include "catch.hpp"
#include "stack.hpp"

/*
 * Verifies that a new stack is empty.
 * Precons: the stack is instantiated
 * Postcons: stack is detected as empty
 */
TEST_CASE("A new stack is empty", "[stack]") {
    stack tester;
    REQUIRE(tester.empty() == true);
    REQUIRE(tester.full() == false);
}

/*
 * Verifies that a value can be pushed into the stack.
 * Precons: the stack is instantiated
 * Postcons: stack has one element: LAST_VALUE
 */
TEST_CASE("Push test", "[stack]") {
    stack tester;

    REQUIRE(tester.push(LAST_VALUE));
}

/*
 * Verifies that the value at the top of the stack can be correctly identified.
 * Precons: the stack is instantiated with one value
 * Postcons: top() correctly identifies value at top of stack
 */
TEST_CASE("Top test", "[stack]") {
    stack tester;

    tester.push(LAST_VALUE);
    REQUIRE(tester.top() == LAST_VALUE);
}

/*
 * Verifies that a stack can be filled with values, then prints contents to standard output.
 * Precons: stack instantiated
 * Postcons: stack is filled with values, and is verified as full
 */
TEST_CASE("Fill stack", "[stack]") {

    stack tester;
    int values[] = SAMPLE_VALUES;

    for(int i = 0; i < sizeof(values)/sizeof(*values); i++) {
        tester.push(values[i]);
    }

    REQUIRE(tester.full() == true);
    REQUIRE(tester.empty() == false);
    REQUIRE(tester.top() == LAST_VALUE);
}

/*
 * Verifies that the pop function correctly removes a value from the top of the stack
 * Precons: stack is instantiated and is filled with values
 * Postcons: stack's last 2 elements have been removed
 */
TEST_CASE("Pop test", "[stack]") {

    stack tester;
    int values[] = SAMPLE_VALUES;

    for(int i = 0; i < sizeof(values)/sizeof(*values); i++) {
        tester.push(values[i]);
    }

    tester.pop();
    tester.pop();

    REQUIRE(tester.top() == THIRD_LAST_VALUE);
}

/*
 * Verifies that the stack prints properly
 * Precons: stack is instantiated with one value
 * Postcons: print returns a string with specified value
 */
TEST_CASE("Print stack", "[stack]") {

    stack tester;
    int values[] = SAMPLE_VALUES;

    for(int i = 0; i < 1; i++) {
        tester.push(values[i]);
    }

    std::stringstream ss;
    ss << "Stack contents:" << std::endl;
    ss << "0: 2" << std::endl;

    REQUIRE(tester.print().compare(ss.str()) == 0);
}