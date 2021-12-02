#include <iostream>
using namespace std;

class Fact {
    public:
    int num;
    
    int findFact() {
        int f = 1;
        for (int i = 1; i <= num; i++)
        {
            f *= i;
        }
        return f;
    }
};

int main()
{
    Fact f;
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    f.num = n;
    int fact = f.findFact();
    cout<<"The factorial is: "<<fact<<endl;
    return 0;
}