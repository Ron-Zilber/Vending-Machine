/* Assignment C++: 1
   Author: Ron Zilbershtein, ID: 205996929
*/
class DispenserType{
private:
    int numberOfItems; int cost;

public:
    DispenserType();           // The default constructor
    DispenserType(int, int);   // a non-default constructor that gets arguments
    int getNoOfItems() const;  // Return the value of numberOfItems
    int getCost() const;       // Return the value of cost
    void makeSale();           // Reduce the number of items by 1
    void fillStorage(int);
};