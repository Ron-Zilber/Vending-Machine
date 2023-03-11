/* Assignment C++: 1
   Author: Ron Zilbershtein, ID: 205996929
*/
#include "StackNode.h"
#include <climits>
#include <iostream>
using namespace std;
class Stack{
private:
    StackNode * top;          // Points to the top of sack node
    int numsAmount;           // The number of elements in the stack

public:
    Stack();                  // The default constructor
    ~Stack();                 // The destructor freeing the dynamic allocated memory
    void push(int);           // In Stack.cpp it takes the int argument as const int
    void freeMemory();        // Free the dynamic allocated memory
    void pop();               // Remove the top of stack element from the stack
    void pop(const string&);  // Function loading - just for the memory freeing: use pop without printing massage to user
    bool isEmpty() const;     // Returns a boolean value that tell whether the stack is empty or not
    int peek() const;         // Returns the element at the top of the stack
};