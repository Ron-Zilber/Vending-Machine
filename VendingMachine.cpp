/* Assignment C++: 1
   Author: Ron Zilber
*/
#include <iostream>
#include "VendingMachine.h"
using namespace std;
VendingMachine::VendingMachine() { // The default constructor; Fill up the vending machine with default amounts and prices
    this->orange = DispenserType(10,45);          // Creates a DispenserType class object
    this->carrot = DispenserType(5, 50);          // Creates a DispenserType class object
    this->pomegranate = DispenserType(4,75);      // Creates a DispenserType class object
}
void VendingMachine::sellProduct(char aDispenserType) {
    switch ((int)aDispenserType) {
        case 'o':                                 // Client want to buy orange juice
            sellingDialog(this->orange);       // Check the conditions for legit payment and accept/refuse respectfully
            break;
        case 'c':                                 // Client want to buy carrot juice
            sellingDialog(this->carrot);       // Check the conditions for legit payment and accept/refuse respectfully
            break;
        case 'p':                                 // Client want to buy pomegranate juice
            sellingDialog(this->pomegranate);  // Check the conditions for legit payment and accept/refuse respectfully
            break;
        default:  // This code area will never be reached. It is here only because adding 'default' to switch function is a standard
            break;
    }
}
void VendingMachine::sellingDialog( DispenserType & aDispenserType) {
    DispenserType & juiceKind = aDispenserType;   // Creates a reference to the desired juice object (orange\carrot\pomegranate)
    int deposit = 0, temp = 0;                    // Creates some auxiliary variables for simple math operations
    if(juiceKind.getNoOfItems() == 0){            // Check if the juice box have supply of desired juice
        cout << "Sorry, this item is sold out." << endl;
    }
    else{
        cout << "Please deposit " << juiceKind.getCost() << " cents" << endl;
        cin  >> deposit;                          // Get money amount from the user
        this->counter.acceptAmount(deposit);      // Get the payment into the cash register of the juice box
        if(deposit < juiceKind.getCost()){        // Check if the client paid enough
            cout << "Please deposit another " << juiceKind.getCost() - deposit << " cents" << endl;
            cin >>  temp;                         // Get money amount from the user
            this->counter.acceptAmount(temp);     // Get the payment into the cash register of the juice box
            deposit += temp;                      // Add the second payment amount to the first payment amount
        }
        if(deposit < juiceKind.getCost()){        // Check if the client paid enough
            cout << "The amount is not enough. Collect what you deposited.\n"
                    "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n" << endl; // double line down in purpose :)
            this->counter.acceptAmount(-deposit); // Giving the money back to the client
            // (no client class so just lowering back the money amount at cash register)
        }
        else{
            cout <<"Collect your item at the bottom and enjoy.\n"
                   "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n" << endl; // double line down in purpose :)
            juiceKind.makeSale();                 // Reduce the inventory record of the juice by 1
        }
    }
}
void VendingMachine:: fillJuiceBox(){
    this->orange.fillStorage(10);                 // Filling up the orange juice bottles in the juice box
    this->carrot.fillStorage(5);                  // Filling up the carrot juice bottles in the juice box
    this->pomegranate.fillStorage(4);             // Filling up the pomegranate juice bottles in the juice box
}