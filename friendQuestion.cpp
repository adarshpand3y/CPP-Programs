// 2. Create a class Sample, take two variables in it.
// Using a friend function find out the mean of two values given by the user.

#include <iostream>
using namespace std;

class Sample {
    int a, b;
    public:
    Sample(int x, int y) {
        a = x;
        b = y;
    }
    friend int mean(Sample);
};

int mean(Sample s) {
    return (s.a + s.b)/2;
}

int main()
{
    int x, y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    Sample s(x, y);
    cout<<"The mean is: "<<mean(s)<<endl;
    return 0;
}