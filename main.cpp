#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include "classes.h"
#include "implementation.cpp"
using namespace std;

int main()
{
    vector<int> ids = {17399, 15786, 12398};
    system("CLS");
    system("color 0B");
    char choice;
    string name;
    string phNo;
    bool license;

    int id;

    cout << "-----------------------------------------------------------" << endl;
    cout << "| Welome to Arms and Ammunition Dealership Customer Portal |" << endl;
    cout << "-----------------------------------------------------------\n"
         << endl;
    cout << "Please Enter your details to access the portal" << endl;

    cout << "First Name: ";
    cin >> name;
    cout << "ID: ";
    cin >> id;
    cout << "Phone Number: ";
    cin >> phNo;

    for (int x : ids)
    {
        if (id == x)
        {
            license = true;
            break;
        }
        license = false;
    }


    Customer c1(name, license, id, phNo);
    system("pause");
    do
    {
        system("CLS");
        cout << "x---------------------------x" << endl;
        cout << "| What Do you want to do ?  |" << endl;
        cout << "| A) Buy                    |" << endl;
        cout << "| B) Sell                   |" << endl;
        cout << "| C) Get Appraised          |" << endl;
        cout << "| D) Exit Portal            |" << endl;
        cout << "x---------------------------x" << endl;
        cout << "Please enter your choice: ";
        cin >> choice;
        cout << endl;

        if (choice == 'A' || choice == 'a' || choice == '1')
        {
            c1.Buy();
        }

        else if (choice == 'B' || choice == 'b' || choice == '2')
        {
            c1.Sell();
        }
        else if (choice == 'D' || choice == 'd' || choice == '3')
        {
            cout << "x--------------------------------x" << endl;
            cout << "| Thank you for using our Portal |" << endl;
            cout << "x--------------------------------x" << endl;
        }
        else if (choice == 'C' || choice == 'c' || choice == '3')
        {
            Dealer d1;
            d1.GetDetails();
            d1.Appraise();
        }
        else
        {
            cout << "Please enter a valid option\n"
                 << endl;
            system("pause");
        }

    } while (choice != 'd' && choice != 'D');
    return 0;
}
