//
// Created by Greg on 2018-09-26.
//

#include <iostream>
#include <sstream>
#include "stack.hpp"

#define STACK_SIZE 10
#define BEGIN 0
#define INIT_INDEX -1

using namespace std;

/*
 * Initializes a stack with index of first element pointing to nothing
 */
stack::stack() {
    topIndex = INIT_INDEX;
}

/*
 * Pushes a value into the stack if there is room
 * @param value the value to push
 * @return true if value was pushed, else false
 */
bool stack::push(int value) {
    if(topIndex != STACK_SIZE INIT_INDEX) { // How's that for not using magic numbers?
        topIndex++;
        intStack[topIndex] = value;
        return true;
    } else return false;
}

/*
 * Removes the last value pushed into the stack
 */
void stack::pop() {
    topIndex--;
}

/*
 * Returns the int stored at the top of the stack
 * @return the int at the top of the stack
 */
const int stack::top() {
    const int top = intStack[topIndex];
    return top;
}

/*
 * Tests if the stack is empty
 * @return true if stack is empty, else false
 */
const bool stack::empty() {
    const bool isEmpty = topIndex == INIT_INDEX;
    return isEmpty;
}

/*
 * Tests if the stack is full
 * @return true if stack is full, else false
 */
const bool stack::full() {
    const bool isFull = topIndex == STACK_SIZE INIT_INDEX;
    return isFull;
}

/*
 * Prints stack contents into a stringstream, then converts it into a string
 * @return string representing stack contents
 */
const string stack::print() {
    stringstream stackPrt;
    stackPrt << "Stack contents:" << endl;
    for(int i = BEGIN; i <= topIndex; i++)
        stackPrt << i << ": " << intStack[i] << endl;

    return stackPrt.str();
}