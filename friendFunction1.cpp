// Create two classes DM and DB which store the value of distances.
// DM stores distances in metres and centimetres and DB in feet and inches.
// Write a CPP program that can read values for the class objects and
// add one object of DM with another object of DB.
// Use a friend function to carry out the addition operation.
// The object that stores the results may be a DM object or DB object,
// depending on the units in which the results are required.
// The display should be in the format of feet and inches or
// metres and centimetres depending on the object on display.

#include <iostream>
#include <math.h>

using namespace std;

class DM
{
    public:
        double meter, centimeter;
};

class DB
{
    public:
        double feet, inches;
        friend void add(DM, DB);
};

void add(DM dm, DB db)
{
    double d1, d2;
    cout << "\nEnter the distance in meter and centimeter:";
    cin >> dm.meter >> dm.centimeter;
    cout << "\nEnter the distance in feet and inches:";
    cin >> db.feet >> db.inches;
    d1 = dm.meter + (db.feet) / 3.281;
    d2 = dm.centimeter + (db.inches) * 2.54;
    cout << "\nMeter + Feet = " << d1 << " meter";
    cout << "\nCentimeter + inches = " << d2 << " centimeter";
}

int main()
{
    DM dm;
    DB db;
    add(dm, db);
}