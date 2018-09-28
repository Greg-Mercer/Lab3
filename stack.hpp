//
// Created by Greg on 2018-09-26.
//

#ifndef LAB3_STACK_HPP
#define LAB3_STACK_HPP
#define STACK_SIZE 10

#endif //LAB3_STACK_HPP

/*
 * A last in, first out data structure comprised of an array of ints and an index pointing to
 * the last element added to the stack. Contains methods to test and manipulate stack data.
 */
class stack {

    private:
        int intStack[STACK_SIZE];   // functions as the stack
        int topIndex;               // index of the top element in the stack

    public:
        stack();
        bool push(int value);
        void pop();
        const int top();
        const bool empty();
        const bool full();
        const std::string print();
};