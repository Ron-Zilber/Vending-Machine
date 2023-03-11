/* Assignment C++: 1
   Author: Ron Zilber
*/
#include "Stack.h"
Stack::Stack() {
    this->numsAmount = 0;               // A new stack has no elements in it
    this->top = new StackNode;          // Create a new stack node that will get the first element when push function will be called
}
Stack::~Stack() {                       // The destructor deleting the dynamic allocated memory
    delete this->top;                   // Delete the dynamic allocated memory
}
void Stack::push(const int num) {
    StackNode * temp = this->top;       // Put the current top of stack element in a temporal variable
    this->top = new StackNode(num);     // Set the top of stack pointer to point to the new inserted element
    this->top->setNext(temp);           // Set the former top of stack element to be the next node to the new TOS
    this->numsAmount += 1;              // Add 1 to the stack elements counter
}
void Stack::pop() {
    cout << "Removing " << this->top->getData() << endl;
    StackNode * temp;                   // Create a new temporal variable
    temp = this->top;                   // Put the current top of stack element in a temporal variable
    this->top = temp->getNext();        // Set the next element in the stack (after the TOS) to be the current TOS
    delete temp;                        // Free the memory in which the former top of stack stored
    numsAmount -= 1;                    // Decrease the stack elements counter by 1
}
void Stack::pop(const string& mod) {    // function loading - just for the memory freeing: use pop without printing massage to user
    if(mod == "-fm"){                   // '-fm' stands for "free memory"
        StackNode * temp;               // Create a new temporal variable
        temp = this->top;               // Put the current top of stack element in a temporal variable
        this->top = temp->getNext();    // Set the next element in the stack (after the TOS) to be the current TOS
        delete temp;                    // Free the memory in which the former top of stack stored
        numsAmount -= 1;                // Decrease the stack elements counter by 1
        }
}
bool Stack::isEmpty() const{            // Returns a boolean value that tell whether the stack is empty or not
    if(numsAmount == 0){
        return true;
    }
    return false;
}
int Stack::peek() const{                // Returns the element at the top of the stack
    if(this->isEmpty()){
        return INT_MIN;
    }
    else {
        return this->top->getData();
    }
}
void Stack::freeMemory(){      // Used to free dynamic allocated memory at the end of the program
    while(!this->isEmpty()){
        this->pop("-fm"); // mode ''-fm'' stand for free memory. This mode do not print massages to the user
    }
}