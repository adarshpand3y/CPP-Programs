// Write a C++ program to display a group of student details (name, roll_no, address, zip code).
// Create a class named Student, use default constructor to initialize values,
// then take two functions for i/p (get)& o/p(disp).

#include <iostream>
using namespace std;
class Student {
    public:
        string name;
        int roll;
        string address;
        int zip;
        Student() {
            name = "";
            roll = 0;
            address = "";
            zip = 0;
        }
    public:
        void getValues() {
            cout<<"Enter name, roll, address, zip: ";
            cin >> name;
            cin >> roll;
            cin >> address;
            cin >> zip;
        }
    public:
        void displayValues() {
            cout<<"=========================="<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Roll: "<<roll<<endl;
            cout<<"Address: "<<address<<endl;
            cout<<"Zip: "<<zip<<endl;
        }
};
int main() {
    int n;
    cout<< "Enter the number of students: ";
    cin>>n;
    Student s[n];
    for (int i = 0; i < n; i++) {
        s[i].getValues();
    }
    for (int i = 0; i < n; i++) {
        s[i].displayValues();
    }
    return 0;
}