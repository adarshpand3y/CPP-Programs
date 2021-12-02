// add and subtract two values of one object
// into another object of a same class
#include <iostream>
using namespace std;

class Value {
    public:
        int a, b;
        void getValue(Value v) {
            a = v.a;
            b = v.b;
        }
        void addAndSub() {
            int sum = a+b;
            int diff = a-b;
            cout<<"The sum is: "<<sum<<endl;
            cout<<"The diff is: "<<diff<<endl;
        }
};

int main()
{
    Value val;
    val.a = 10;
    val.b = 20;
    Value val2;
    val2.getValue(val);
    val2.addAndSub();
    return 0;
}