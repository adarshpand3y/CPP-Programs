// Write a C++ program to calculate the area of a wall
// And copy the contents of wall 1 into wall 2
// Using copy constructor

#include <iostream>
using namespace std;

class Wall {
    public:
        int length;
        int width;
    // Parameterized Constructor
    Wall(int x, int y) {
        length = x;
        width = y;
    }
    // Copy constructor
    Wall(const Wall &w) {
        length = w.length;
        width = w.width;
    }
    int returnArea() {
        return length*width;
    }
};
int main() {
    int l, w;
    cout<<"Enter length and width: ";
    cin >> l >> w;
    Wall w1(l, w);
    Wall w2 = w1;
    int area = w2.returnArea();
    cout<<"The area of the wall is "<< area<<endl;
    return 0;
}