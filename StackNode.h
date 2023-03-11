/* Assignment C++: 1
   Author: Ron Zilber
*/
class StackNode{
private:
    int data;                        // The value field of the node
    StackNode * next;                // a Pointer to the next node

public:
    explicit StackNode(int num = 0);          // The default constructor
    int getData() const;             // Returns the value that the node holds to the user
    StackNode * getNext() const;     // Returns a pointer to the next node to the user
    void setNext(StackNode *);       // Enables the user to connect the node to another node with pointer
};