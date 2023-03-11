/* Assignment C++: 1
   Author: Ron Zilber
*/
class CashRegister{
private:
    int cashOnHands; // The balance in the cash register

public:
    explicit CashRegister(int num = 0);     // Sets the cash in the register to 0 by default or to given number (if given)
    int getCurrentBalance() const; // Returns value of cashOnHands to the user
    void acceptAmount(int);        // Receive the amount deposited by the customer and update the amount in the register
};