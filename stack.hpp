//
// Created by Greg on 2018-09-26.
//

#ifndef LAB3_STACK_HPP
#define LAB3_STACK_HPP
#define STACK_SIZE 10

#endif //LAB3_STACK_HPP

class stack {

private:
    int intStack[STACK_SIZE];
    int topIndex;

public:
    stack();
    bool push(int value);
    void pop();
    const int top();
    const bool empty();
    const bool full();
    const void print();
};