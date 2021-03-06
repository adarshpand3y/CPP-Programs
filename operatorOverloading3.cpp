// Create a class FLOAT that contains one data member.
// Overload all the four arithmetic operators so that they operate on the objects of FLOAT.
#include <iostream>
using namespace std;
class Float {
    float i;
    public:
        Float() : i(5) {}
        Float(float x) : i(x) {}

        Float operator+(Float a) {
            Float temp;
            temp.i = i + a.i;
            return temp;
        }
        Float operator-(Float a) {
            Float temp;
            temp.i = i - a.i;
            return temp;
        }
        Float operator/(float a) {
            Float temp;
            temp.i = i / a;
            return temp;
        }
        friend Float operator*(float a, Float b) {
            Float temp;
            temp.i = a * b.i;
            return temp;
        }
        void show() {
            cout << i << endl;
        }
};
int main()
{
    Float a = 12.5, b = 6.9, c;
    cout << "a = 12.5    b = 6.9\n";
    c = a + b;
    cout << "a + b = ";
    c.show();
    c = a - b;
    cout << "a - b = ";
    c.show();
    c = a / 5.3;
    cout << "a / 5.3 = ";
    c.show();
    c = 10.6 * b;
    cout << "10.6 * b = ";
    c.show();
    return 0;
}