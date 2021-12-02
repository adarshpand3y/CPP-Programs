// Write a C++ program to show the unary increment (++) and decrement (--) operator overloading.

#include <iostream>
using namespace std;

class Overloading {
    public:
    int data;
    Overloading() {
        data = 10;
    }
    int operator ++ (int a) {
        return ++a;
    }
    int operator -- (int a) {
        return --a;
    }
};

int main()
{
    Overloading ob();
    int a = ob.data;
    return 0;
}