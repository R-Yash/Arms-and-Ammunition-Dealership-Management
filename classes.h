#include <string>
#include <cstdlib>
#include <vector>
#include <iostream>
using namespace std;

#ifndef CLASSES_H
#define CLASSES_H

class Gun
{
protected:
    int id;
    float recoil;
    float clipSize;
    float firingRange;

public:
    string Model;
};

class SemiAutomatic : public Gun
{
    float impact;
    float reloadDelay;

public:
    float ForceExcerted();
    void GetInfo();
    SemiAutomatic();
};

class Automatic : public Gun
{
    float BPS;
    float burst;

public:
    void GetInfo();
    Automatic();
    float BurstArea();
    float FireRate();
};

class Shotgun : public SemiAutomatic
{

    float price;
    char grade;

public:
    float PredictPrice();
    void SetGrade(char);
    void GetInfo();
    Shotgun();
};

class Pistol : public SemiAutomatic
{
    float price;
    char grade;

public:
    float PredictPrice();
    void SetGrade(char);
    void GetInfo();
    Pistol();
};

class Rifle : public Automatic
{
    float price;
    char grade;

public:
    float PredictPrice();
    void SetGrade(char);
    void GetInfo();
    Rifle();
};

class Ammunition
{
    float gauge;
    float caliber;

public:
    float Penetration();
    Ammunition();
    Ammunition(float, float);
};

class Person
{
protected:
    int id;
    string phoneNumber;
    vector<pair<Gun, float>> checkout;
    static float bill;
    static float AmmoBill;

public:
    virtual void GetDetails() = 0;
    Person(int, string);
    Person();
};

class Dealer : public Person
{
    int attendance;
    int sales;
    int appraisals;

public:
    void Appraise();
    void GetDetails();
    Dealer();
};

class Customer : public Person
{
    string name;
    bool license;

public:
    void Buy();
    void Sell();
    void GetDetails();
    Customer(string name, bool license, int id, string phoneNumber) : Person(id, phoneNumber)
    {
        this->name = name;
        this->license = license;
        GetDetails();
    };
};

#endif