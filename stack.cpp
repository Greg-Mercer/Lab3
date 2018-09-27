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

stack::stack() {
    topIndex = INIT_INDEX;
}

bool stack::push(int value) {
    if(topIndex != STACK_SIZE INIT_INDEX) { // How's that for not using magic numbers?
        topIndex++;
        intStack[topIndex] = value;
        return true;
    } else return false;
}

void stack::pop() {
    topIndex--;
}

const int stack::top() {
    const int top = intStack[topIndex];
    return top;
}

const bool stack::empty() {
    const bool isEmpty = topIndex == INIT_INDEX;
    return isEmpty;
}

const bool stack::full() {
    const bool isFull = topIndex == STACK_SIZE INIT_INDEX;
    return isFull;
}

const string stack::print() {
    stringstream stackPrt;
    stackPrt << "Stack contents:" << endl;
    for(int i = BEGIN; i <= topIndex; i++)
        stackPrt << i << ": " << intStack[i] << endl;

    return stackPrt.str();
}