#include <iostream>
#include <iomanip>
#include "Stack.h"
#include "Inventory.h"

using namespace std;

int printMenu()
{
    int choice;
    cout << "-------------Inventory Menu----------" << endl
         << endl;
    cout << "1. Enter a part into inventory." << endl;
    cout << "2. Delete a part from inventory." << endl;
    cout << "3. Quit." << endl
         << endl;
    ;
    cout << "Please make a choice(1,2 or 3): ";
    cin >> choice;
    return choice == 1 || choice == 2 || choice == 3 ? choice : -1;
}
Inventory addItem()
{
    int serial, lot;
    string date;

    cout << "Enter the item's serial number: ";
    cin >> serial;
    cout << "Enter the item's manufacture date: ";
    cin >> date;
    cout << "Enter the item's lot number: ";
    cin >> lot;
    cout << endl
         << endl;
    Inventory item(serial, date, lot);
    return item;
}
void printStack(Stack<Inventory> s)
{
    if (s.empty())
    {
        cout<<"Inventory is empty"<<endl;
        return;
    }
    
    cout << "The stack contains as below(top to bottom)" << endl
         << endl;
    for (size_t i = 0; i < s.getStack().size(); i++)
    {
        cout << s.getStack().at(i) << endl;
    }
    cout << "___________________________________" << endl;
}

int main()
{
    Stack<Inventory> i;
    while (true)
    {
        switch (printMenu())
        {
        case 1:
        {
            i.push(addItem());
            printStack(i);
            break;
        }

        case 2:
        {
            cout << "You have chosen to remove an item from the inventory." << endl;
            if (!i.empty())
            {
                cout << "The part you removed is " << i.top() << endl;
                i.pop();
                printStack(i);
            }else{
                cout<<"Inventory is empty."<<endl;
            }

            break;
        }
        case 3:
        {
            cout << "You quit. Bye..." << endl
                 << endl;

            printStack(i);
            return EXIT_SUCCESS;
        }

        default:
            break;
        }
    }
}