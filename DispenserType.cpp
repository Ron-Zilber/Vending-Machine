/* Assignment C++: 1
   Author: Ron Zilbershtein, ID: 205996929
*/
#include "DispenserType.h"

DispenserType::DispenserType() { // The default constructor
    this->numberOfItems = 0;     // Default number of items for a new juice is 0
    this->cost = 0;              // Default price for a new juice is 0
}
DispenserType::DispenserType(int aNumberOfitems, int aCost) { // Another constructor
    this->numberOfItems = aNumberOfitems; // Setting the number of items as the owner specifies
    this->cost = aCost;                   // Setting the cost of the juice as the owner specifies
}
int DispenserType::getNoOfItems() const {
    return numberOfItems;                 // Returns the value of numberOfItems
}
void DispenserType::makeSale() {
    numberOfItems--;                      // Reduce the number of items by 1
}
int DispenserType::getCost () const{
    return cost;                          // Return the price of the juice
}
void DispenserType::fillStorage(const int amount){
    this->numberOfItems = amount;        // Renew the supply of the juice as the owner specifies
}