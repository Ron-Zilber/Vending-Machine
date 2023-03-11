/* Assignment C++: 1
   Author: Ron Zilber
*/
#include "DispenserType.h"
#include "CashRegister.h"

class VendingMachine{
private:
    DispenserType orange;                // Creates a juice  object for the vending machine
    DispenserType carrot;                // Creates a juice  object for the vending machine
    DispenserType pomegranate;           // Creates a juice  object for the vending machine
    CashRegister counter;                // Creates a cash register for the vending machine
    void sellingDialog(DispenserType &); // Checks the conditions for legit payment and accept/refuse the money respectfully

public:
    VendingMachine();                    // The default constructor
    void sellProduct(char);              // Enables to choose a product to buy and send it as argument to 'sellingDialog' function
    void fillJuiceBox();                 // Enables the vending machine owner to renew supply
};