// Create two classes DM and DB which store the value of distances.
// DM stores distances in metres and centimetres and DB in feet and inches.
// Write a CPP program that can read values for the class objects and
// add one object of DM with another object of DB.
// Use a friend function to carry out the addition operation.
// The object that stores the results may be a DM object or DB object,
// depending on the units in which the results are required.
// The display should be in the format of feet and inches or
// metres and centimetres depending on the object on display. 

// Create a class Sample, take two variables in it.
// Using a friend function find out the mean of two values given by the user. 

#include <iostream>
using namespace std;

class DM;

class DB {
    float feet, inch;
    public:
    DB() {
        feet=0;
        inch=0;
    }
    void getValue(float f, float i) {
        feet = f;
        inch = i;
    }
    friend DM sum(DB, DM);
};

class DM {
    float meter, centi;
    friend DM sum(DM, DB);
    public:
    DM() {
        meter = 0;
        centi = 0;
    }
    void getValue(float m, float c) {
        meter = m;
        centi = c;
    }
    void printData() {
        cout<<"Meter: "<<meter<<endl;
        cout<<"Centimeter: "<<centi<<endl;
    }
    friend DM sum(DB, DM);
};

DM sum(DB db, DM dm) {
    float m = dm.meter;
    float c = dm.centi;
    float f = db.feet;
    float i = db.inch;
    DM newDM = DM();
    float distInCm = ((f*12)+i)*2.54;
    float newDistInCM = m*100 + c;
    float totalDist = distInCm + newDistInCM;
    newDM.meter = (int) totalDist/100;
    newDM.centi = (int) totalDist%100;
    return newDM;
}

int main()
{
    float m, c, f, i;
    DB db;
    DM dm;
    cout<<"Enter the length in meter and centimeter: ";
    cin>>m>>c;
    db.getValue(m, c);
    cout<<"Enter the length in feet and inches: ";
    cin>>f>>i;
    db.getValue(f, i);
    DM dist = sum(db, dm);
    dist.printData();
    return 0;
}