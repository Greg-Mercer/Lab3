//
// Created by Greg on 2018-09-26.
//

#include <iostream>
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
    return intStack[topIndex];
}

const bool stack::empty() {
    return topIndex == -1;
}

const bool stack::full() {
    return topIndex == STACK_SIZE INIT_INDEX;
}

const void stack::print() {
    cout << "Stack contents:" << endl;
    for(int i = BEGIN; i <= topIndex; i++)
        cout << i << ": " << intStack[i] << endl;
}