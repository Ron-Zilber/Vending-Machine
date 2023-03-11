/* Assignment C++: 1
   Author: Ron Zilber
*/
#include "StackNode.h"
StackNode::StackNode(int num){ // Didn't make the argument num const because maybe this value will be changed later
    this-> next = nullptr;     // By default, a new node has no next node, until the user want to make such connection
    this->data = num;          // If user specifies a number, it goes to the data field. else: data = 0 (default value)
}
int StackNode::getData() const {                // Enables the user to grab the value from the node's data field
    return this->data;
}
void StackNode::setNext(StackNode * pointer) {  // Enables the user to connect the node to another one
    this->next = pointer;
}
StackNode * StackNode:: getNext() const{        // Enables the user to grab the address of the next node of the node
    return this->next;
}