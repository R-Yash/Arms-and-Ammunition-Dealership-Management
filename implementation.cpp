#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <fstream>
using namespace std;
#include "classes.h"

float Person::bill;
float Person::AmmoBill;

void Customer::Buy()
{
    char ch;
    do
    {
        // Enter Choice
        system("CLS");
        cout << "x-------------------------------x" << endl;
        cout << "| What kind of Gun do you want? |" << endl;
        cout << "| A) Shotgun                    |" << endl;
        cout << "| B) Pistol                     |" << endl;
        cout << "| C) Rifle                      |" << endl;
        cout << "| D) Ammunition                 |" << endl;
        cout << "| E) Checkout                   |" << endl;
        cout << "x-------------------------------x" << endl;
        cout << "Your Selection: ";
        cin >> ch;
        cout << endl;

        if (ch == 'a' || ch == 'A' || ch == '1')
        {
            int a = 0;
            cout << "Available choices are: \n"
                 << endl;
            // Depending on the choice, Objects created
            Shotgun s1, s2, s3;
            float b1, b2, b3;
            // Their info and the price is displayed
            s1.GetInfo();
            b1 = s1.PredictPrice();
            cout << "    Price: " << b1 << "$\n";
            cout << " --------------------------" << endl;
            cout << endl;

            s2.GetInfo();
            b2 = s2.PredictPrice();
            cout << "    Price: " << b2 << "$\n";
            cout << " --------------------------" << endl;
            cout << endl;

            s3.GetInfo();
            b3 = s3.PredictPrice();
            cout << "    Price: " << b3 << "$\n";
            cout << " --------------------------" << endl;
            cout << endl;

            cout << "Enter your choice: ";
            cin >> a;

            if (a == 1)
            {
                // Money Added to total bill
                bill += b1;
                // A pair container created with Gun and price
                pair<Gun, float> sgs;
                sgs.first = s1;
                sgs.second = b1;
                // Pair pushed into checkout Vector
                checkout.push_back(sgs);
            }
            else if (a == 2)
            {
                bill += b2;
                pair<Gun, float> sgs;
                sgs.first = s2;
                sgs.second = b2;
                checkout.push_back(sgs);
            }
            else if (a == 3)
            {
                bill += b3;
                pair<Gun, float> sgs;
                sgs.first = s3;
                sgs.second = b3;
                checkout.push_back(sgs);
            }
            else
            {
                cout << "x-----x" << endl;
                cout << "|ERROR|" << endl;
                cout << "x-----x\n"
                     << endl;
                system("pause");
            }

            cout << "Added! What else do you need" << endl;

            cout << "\nCURRENT BILL:" << bill << endl;
            system("pause");
        }

        else if (ch == 'b' || ch == 'B' || ch == '2')
        {
            int a = 0;
            cout << "Available choices are: \n"
                 << endl;
            Pistol p1, p2, p3;
            float b1, b2, b3;
            p1.GetInfo();
            b1 = p1.PredictPrice();
            cout << "    Price: " << b1 << "$\n";
            cout << " --------------------------" << endl;
            cout << endl;

            p2.GetInfo();
            b2 = p2.PredictPrice();
            cout << "    Price: " << b2 << "$\n";
            cout << " --------------------------" << endl;
            cout << endl;

            p3.GetInfo();
            b3 = p3.PredictPrice();
            cout << "    Price: " << b3 << "$\n";
            cout << " --------------------------" << endl;
            cout << endl;

            cout << "Enter your choice: ";
            cin >> a;

            if (a == 1)
            {
                bill += b1;
                pair<Gun, float> sgs;
                sgs.first = p1;
                sgs.second = b1;
                checkout.push_back(sgs);
            }
            else if (a == 2)
            {
                bill += b2;
                pair<Gun, float> sgs;
                sgs.first = p2;
                sgs.second = b2;
                checkout.push_back(sgs);
            }
            else if (a == 3)
            {
                bill += b3;
                pair<Gun, float> sgs;
                sgs.first = p3;
                sgs.second = b3;
                checkout.push_back(sgs);
            }
            else
            {
                cout << "x-----x" << endl;
                cout << "|ERROR|" << endl;
                cout << "x-----x\n"
                     << endl;
                system("pause");
            }

            cout << "Added! What else do you need" << endl;

            cout << "\nCURRENT BILL:" << bill << endl;
            system("pause");
        }

        else if (ch == 'c' || ch == 'C' || ch == '3')
        {
            int a = 0;
            cout << "Available choices are: \n"
                 << endl;
            Rifle r1, r2, r3;
            float b1, b2, b3;
            r1.GetInfo();
            b1 = r1.PredictPrice();
            cout << "    Price: " << b1 << "$\n";
            cout << " --------------------------" << endl;
            cout << endl;

            r2.GetInfo();
            b2 = r2.PredictPrice();
            cout << "    Price: " << b2 << "$\n";
            cout << " --------------------------" << endl;
            cout << endl;

            r3.GetInfo();
            b3 = r3.PredictPrice();
            cout << "    Price: " << b3 << "$\n";
            cout << " --------------------------" << endl;
            cout << endl;

            cout << "Enter your choice: ";
            cin >> a;

            if (a == 1)
            {
                bill += b1;
                pair<Gun, float> sgs;
                sgs.first = r1;
                sgs.second = b1;
                checkout.push_back(sgs);
            }
            else if (a == 2)
            {
                bill += b2;
                pair<Gun, float> sgs;
                sgs.first = r2;
                sgs.second = b2;
                checkout.push_back(sgs);
            }
            else if (a == 3)
            {
                bill += b3;
                pair<Gun, float> sgs;
                sgs.first = r3;
                sgs.second = b3;
                checkout.push_back(sgs);
            }
            else
            {
                cout << "x-----x" << endl;
                cout << "|ERROR|" << endl;
                cout << "x-----x\n"
                     << endl;
                system("pause");
            }

            cout << "Added! What else do you need" << endl;
            cout << "\nCURRENT BILL:" << bill << endl;
            system("pause");
        }

        else if (ch == 'd' || ch == 'D' || ch == '4')
        {
            float x, y;
            int q;
            cout << "Enter bullet gauge in cm: ";
            cin >> x;
            cout << "Enter caliber in cm: ";
            cin >> y;
            Ammunition a1(x, y);
            cout << "Expected Penetration: " << a1.Penetration() << endl;
            cout << "Enter Quantity: ";
            cin >> q;
            float price = q * (rand() % 7 + 5);
            cout << "Ammunition Added!" << endl;
            bill += price;
            AmmoBill += price;
            system("pause");
        }

        else if (ch == 'e' || ch == 'E')
        {
            ofstream rec("Receipt.txt");
            // Finally, Bill is printed
            cout << "---------------------" << endl;
            cout << "| Model"
                 << "   |   "
                 << "Price |" << endl;
            cout << "---------------------" << endl;
            // Range-based for loop
            for (auto i : checkout)
            {
                cout << "| " << i.first.Model << "   |   " << i.second << "   |" << endl;
            }
            if (AmmoBill != 0)
            {
                cout << "| Ammo    |   " << AmmoBill << "   |" << endl;
            }
            cout << "---------------------" << endl;
            cout << "Total Price: " << bill << "$" << endl;
            cout << "---------------------" << endl;
            // External .txt file
            rec << "  Final Bill" << endl;
            rec << "  Name: " << name << endl;
            rec << "  ID: " << id << endl;
            rec << "  Phone Number:" << phoneNumber << endl;
            rec << "---------------------" << endl;
            rec << "| Model"
                << "   |   "
                << "Price |" << endl;
            rec << "---------------------" << endl;
            for (auto i : checkout)
            {
                rec << "| " << i.first.Model << "   |   " << i.second << "   |" << endl;
            }
            if (AmmoBill != 0)
            {
                rec << "| Ammo    |   " << AmmoBill << "   |" << endl;
            }
            rec << "---------------------" << endl;
            rec << "Total Price: " << bill << "$" << endl;
            rec << "---------------------" << endl;

            rec.close();

            cout << "Thanks for shopping!\nRedirecting to Home Page\n"
                 << endl;
            system("pause");
        }

        else
        {
            cout << "Please enter a valid option\n"
                 << endl;
            system("pause");
        }

    } while (ch != 'e' && ch != 'E');
}

void Customer::Sell()
{
    // Selling function inside customer class
    system("CLS");
    float sp = 0;
    char a;
    int x, y, z;
    cout << "Welocme to the selling interface!" << endl;
    // Price estimated by certain features
    cout << "Please enter its specifics" << endl;
    cout << "Clip Size (Enter a value greater than 4): ";
    cin >> x;
    cout << "Range (Enter a value greater than 20): ";
    cin >> y;
    cout << "Recoil (Enter a value greater than 6): ";
    cin >> z;
    // Different amount is added depending on the range
    if (x >= 4 && x < 11)
    {
        sp += rand() % 33 + 60;
    }
    else if (x >= 11 && x <= 19)
    {
        sp += rand() % 115 + 60;
    }
    else if (x > 20)
    {
        sp += 208;
    }
    // These values are based on real world, researched values
    if (y >= 20 && x < 40)
    {
        sp += rand() % 33 + 60;
    }
    else if (y > 40 && y <= 180)
    {
        sp += rand() % 115 + 60;
    }
    else if (y > 180)
    {
        sp += rand() % 134 + 116;
    }

    if (z >= 6 && z <= 18)
    {
        sp += rand() % 33 + 60;
    }
    else if (z > 18 && z <= 40)
    {
        sp += rand() % 134 + 116;
    }
    else if (z > 40)
    {
        sp += rand() % 115 + 6;
    }
    sp += 111;
    cout << "Its Price is " << sp << "$" << endl;
    system("pause");
}

void Customer::GetDetails()
{
    cout << "---------------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Phone Number: " << phoneNumber << endl;
    if (license)
    {
        cout << "License: Yes" << endl;
    }
    else
    {
        cout << "License: Not found. Please Get a License" << endl;
        cout << "---------------------------" << endl;
        exit(10);
    }
    cout << "---------------------------" << endl;
}

float Ammunition::Penetration()
{
    return (gauge / caliber) * 10;
}

Ammunition::Ammunition()
{
    gauge = 0;
    caliber = 0;
}

Ammunition::Ammunition(float x, float y)
{
    gauge = x;
    caliber = y;
}

float SemiAutomatic::ForceExcerted()
{
    return rand() % 4 + impact;
}

SemiAutomatic::SemiAutomatic()
{
    this->impact = rand() % 3 + 7;
}

Automatic::Automatic()
{
    this->BPS = rand() % 3 + 4;
    this->burst = rand() % 4 + 5;
}

float Automatic::BurstArea()
{
    return 3.14 * burst * burst;
}

float Automatic::FireRate()
{
    return BPS * 60;
}

float Shotgun::PredictPrice()
{
    price = rand() % 346 + 179;
    return price;
}

void Shotgun::SetGrade(char g)
{
    this->grade = g;
    cout << "The Grade Assigned to this gun is: " << grade << endl;
}

void Shotgun::GetInfo()
{
    cout << " --------------------------" << endl;
    cout << "    Model: " << Model << endl;
    cout << "       ID: " << id << endl;
    cout << "Clip Size: " << clipSize << endl;
    cout << "    Range: " << firingRange << " m" << endl;
    cout << "   Recoil: " << recoil << " Ns" << endl;
    cout << "    Force: " << ForceExcerted() << " N" << endl;
    cout << " --------------------------" << endl;
}

Shotgun::Shotgun()
{
    this->Model = "SG" + to_string(rand() % 60 + 100);
    this->id = rand() % 700 + 1200;
    this->clipSize = rand() % 8 + 11;
    this->firingRange = rand() % 146 + 35;
    this->recoil = rand() % 50 + 6;
}

float Pistol::PredictPrice()
{
    price = rand() % 100 + 179;
    return price;
}

void Pistol::SetGrade(char g)
{
    this->grade = g;
    cout << "The Grade Assigned to this gun is: " << grade << endl;
}

void Pistol::GetInfo()
{
    cout << " --------------------------" << endl;
    cout << "    Model: " << Model << endl;
    cout << "       ID: " << id << endl;
    cout << "Clip Size: " << clipSize << endl;
    cout << "    Range: " << firingRange << " m" << endl;
    cout << "   Recoil: " << recoil << " Ns" << endl;
    cout << "    Force: " << ForceExcerted() << " N" << endl;
    cout << " --------------------------" << endl;
}

Pistol::Pistol()
{
    this->Model = "PS" + to_string(rand() % 20 + 120);
    this->id = rand() % 700 + 1400;
    this->clipSize = rand() % 7 + 4;
    this->firingRange = rand() % 28 + 30;
    this->recoil = rand() % 12 + 6;
}

float Rifle::PredictPrice()
{
    price = rand() % 250 + 500;
    return price;
}

void Rifle::SetGrade(char g)
{
    this->grade = g;
    cout << "The Grade Assigned to this gun is: " << grade << endl;
}

void Rifle::GetInfo()
{
    cout << " --------------------------" << endl;
    cout << "     Model: " << Model << endl;
    cout << "        ID: " << id << endl;
    cout << " Clip Size: " << clipSize << endl;
    cout << "     Range: " << firingRange << " m" << endl;
    cout << "    Recoil: " << recoil << " Ns" << endl;
    cout << "Burst Area: " << BurstArea() << " cm^2" << endl;
    cout << " Fire Rate: " << FireRate() << endl;
    cout << " --------------------------" << endl;
}

Rifle::Rifle()
{
    this->Model = "AR0" + to_string(rand() % 60 + 40);
    this->id = rand() % 700 + 500;
    this->clipSize = rand() % 300 + 60;
    this->firingRange = rand() % 200 + 300;
    this->recoil = rand() % 30 + 10;
}

Person::Person(int id, string phno)
{
    this->id = id;
    this->phoneNumber = phno;
}

Person::Person()
{
}

void Dealer::Appraise()
{
    system("CLS");
    int a;
    char g;

    cout << "What type of gun do you want to get appraised" << endl;
    cout << "1) Shotgun     2)Pistol     3)Rifle" << endl;
    cin >> a;
    cout << "These are the details of your gun " << endl;
    // Based on Gun, grade is assigned
    if (a == 1)
    {
        Shotgun s;
        s.GetInfo();
        g = rand() % 4 + 65;
        s.SetGrade(g);
    }
    else if (a == 2)
    {
        Pistol p;
        p.GetInfo();
        g = rand() % 4 + 65;
        p.SetGrade(g);
    }
    else if (a == 3)
    {
        Rifle r;
        r.GetInfo();
        g = rand() % 4 + 65;
        r.SetGrade(g);
    }
    else
    {
        cout << "x-----x" << endl;
        cout << "|ERROR|" << endl;
        cout << "x-----x\n"
             << endl;
    }
    cout << "We hope you are satisfied with the appraisal!" << endl;
    cout << "Redirecting to Home Portal...\n"
         << endl;
    system("pause");
}

void Dealer::GetDetails()
{
    cout << "The Appraisal of your gun is being conducted by our expert with details: " << endl;
    cout << "x--------------------------x" << endl;
    cout << "ID:" << id << endl;
    cout << "Attendance: " << attendance << "%" << endl;
    cout << "Successful sales: " << sales << endl;
    cout << "Satisfactory appraisals: " << appraisals << endl;
    cout << "x--------------------------x" << endl;
}

Dealer::Dealer()
{
    id = rand() % 789 + 1000;
    this->attendance = rand() % 50 + 50;
    this->sales = rand() % 300 + 20;
    this->appraisals = rand() % 270 + 30;
}
