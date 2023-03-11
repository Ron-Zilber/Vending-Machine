/* Assignment C++: 1
   Author: Ron Zilber
*/
#include "CashRegister.h"

CashRegister::CashRegister(int num) { // The default constructor;If num is specified the amount will get into the cash register.
    this->cashOnHands = num;          // else, the cash register will get 0 dollars to start with.
}
int CashRegister :: getCurrentBalance() const{      // Enables the user to grab the current balance of the cash register
    return  cashOnHands;
}
void CashRegister::acceptAmount(const int num) {    // Enables the user to deposit money into the cash register
    this->cashOnHands += num;
}