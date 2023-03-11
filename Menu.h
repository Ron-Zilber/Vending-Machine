/* Assignment C++: 1
   Author: Ron Zilber
*/
#include "VendingMachine.h"
#include "Stack.h"
class Menu{
private:
    int mainState, shopState, stackState; // Initializing some auxiliary variables for Final State Machines
    VendingMachine VM;                    // Creates a vending machine object
    Stack stack;                          // Creates a stack object

public:
    Menu();                               // The default constructor
    void mainMenu();                      // User interface built as a Final State Machine
    void shopMenu();                      // User interface built as a Final State Machine
    void stackMenu();                     // User interface built as a Final State Machine
};
