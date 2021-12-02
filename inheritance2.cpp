#include <iostream>
#include <string>

using namespace std;

class Staff {
    public:
        int code;
        string name;
};

class Teacher:public Staff {
    string subject;
    string publication;
};

class Officer:public Staff {
    char grade;
};

class Typist:public Staff {
    public:
        int speed;
};

class Regular: public Typist {

};

class Casual: public Typist {
    public:
        int dailyWages;
};



int main()
{
    cout<<"1. Create Employee Account"<<endl;
    cout<<"2. Find Employee Account"<<endl;
    cout<<"Execution Complete"<<endl;
    return 0;
}