/* Assignment C++: 1
   Author: Ron Zilber
*/
#include "Menu.h"
#include <iostream>
using namespace std;

Menu::Menu() {
    mainState = 0, shopState = 0; stackState = 0; // Initializing some auxiliary variables for Final State Machines
}
void Menu::mainMenu() {
    bool flag = false;
    while(!flag){                                 // The flag get 'true' value when client want to go out from this menu
         cout << "(1) Fresh juice Shop\n"
                 "(2) Integer Stack\n"
                 "(3) Exit\n";
         cin >> mainState;
        switch (mainState) {                     // Final State Machine for main menu
            case 1:{
                shopMenu();                      // Go to the juice box Final State Machine
                break;
            }
            case 2:{
                stackMenu();                     // Go to the integer stack Final State Machine
                break;
            }
            case 3:{
                cout << "Goodbye!" << endl;
                flag = true;                     // Go out of the loop and end the program
                break;
            }
            default:{
                cout << "Invalid selection." << endl;
                break;
            }
        }
    }
 }
void Menu::shopMenu() {
    bool flag = false;                            // The flag get 'true' value when client want to go out from this menu
    while(!flag){
        cout << "*** Welcome to juice Shop ***\n"
                "To select an item, enter\n"
                "1 For Orange juice\n"
                "2 For Carrot juice\n"
                "3 For Pomegranate\n"
                "4 To exit\n";
        cin >> shopState;
        switch (shopState) {                     // Final State Machine for shop menu
            case 1:{
                VM.sellProduct('o');
                break;
            }
            case 2:{
                VM.sellProduct('c');
                break;
            }
            case 3:{
                VM.sellProduct('p');
                break;
            }
            case 4:{
                VM.fillJuiceBox();            // while the client goes away it's a good time to fill our vending machine
                cout << "Thank you!" << endl;
                flag = true;
                break;
            }
            default:{
                cout << "Invalid selection." << endl;
                break;
            }
        }
    }
}
void Menu::stackMenu() {
    bool flag = false;                        // The flag get 'true' value when client want to go out from this menu
    while(!flag){
        cout << "*** Manage your integer stack ***\n"
                "1 Push new element\n"
                "2 Pop element\n"
                "3 Show the first element\n"
                "4 Check if empty\n"
                "5 to exit\n";

        cin >> stackState;
        switch (stackState) {               // Final State Machine for stack menu
            case 1:{
                int numToPush;
                cout << "Please insert the new element: ";
                cin >> numToPush;
                stack.push(numToPush);
                break;
            }
            case 2:{
                if(stack.isEmpty()){
                    cout << "Stack empty" << endl;
                }
                else{
                    stack.pop();
                }
                break;
            }
            case 3:{
                cout << "The first element is: " << this->stack.peek() << endl;
                break;
            }
            case 4:{
                if(stack.isEmpty()){
                    cout << "The stack is empty" << endl;
                }
                else{
                    cout << "The stack is not empty" << endl;
                }
                break;
            }
            case 5:{
                flag = true;
                stack.freeMemory();
                cout << "Thank you!" << endl;
                break;
            }
            default:{
                cout << "Invalid selection." << endl;
                break;
            }
        }
    }
}