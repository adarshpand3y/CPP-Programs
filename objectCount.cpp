#include <iostream>
using namespace std;

class Cube {
    public:
    static int objectCount;
    int side;

    Cube(int s) {
        side = s;
        objectCount++;
    }
};

int Cube::objectCount = 0;

int main()
{
    Cube c1(5);
    Cube c2(8);
    Cube c3(10);
    cout<<"Total object count: "<<Cube::objectCount<<endl;
    return 0;
}