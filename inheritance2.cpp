#include <iostream>
using namespace std;
class Staff {
    public:
        char codename[40];
        void stinput() {
            cout << "\nEnter The Code Name For The Staff:";
            cin >> codename;
        }
        void stoutput() {
            cout << "\nThe Code Name For The Staff is: " << codename;
        }
};
class Teacher : public Staff {
    public:
        char subject[40];
        int publ;
        void tinput() {
            cout << "\nEnter The Subject Taught By The Teacher:";
            cin >> subject;
            cout << "\nEnter The Number Of Publications:";
            cin >> publ;
        }
        void toutput() {
            cout << "\nThe Teacher Teaches " << subject;
            cout << "\nThe Number of Publications are: " << publ;
        }
};
class Officer : public Staff {
    public:
        char grade;
        void oinput() {
            cout << "\nEnter The Grade Of The Officer: ";
            cin >> grade;
        }
        void ooutput() {
            cout << "\nThis is a " << grade << " Officer";
        }
};

class Typist : public Staff
{
    public:
        int speed;
        void tyinput() {
            cout << "\nEnter The Speed of The Typist in Words/min: ";
            cin >> speed;
        }
        void tyoutput() {
            cout << "\nThe Typing Speed of The Typist is:" << speed;
        }
};
class Regular : public Typist {};
class Casual : public Typist {
    public:
        int dwage;
        void cinput() {
            cout << "\nEnter The Daily Wage Of The Typist: ";
            cin >> dwage;
        }
        void coutput() {
            cout << "\nThe Daily Wage Of The Typist is:" << dwage;
        }
};
int main() {
    Casual A;
    A.stinput();
    A.tyinput();
    A.cinput();
    A.stoutput();
    A.tyoutput();
    A.coutput();
    return 0;
}