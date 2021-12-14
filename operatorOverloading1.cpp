// Write a CPP program to take length, breadth and height of two cube objects
// as user inputs and calculate the volumes of the same.
// Use operator overloading to find the volume of a third cube object
// by using the addition of the first two objects length, breadth and height.

#include <iostream>
using namespace std;
class Cube {
    int length, breadth, height;
    public:
        Cube(int x, int y, int z) : length(x), breadth(y), height(z) {}
        int Volume() const { return length * breadth * height; }
        Cube operator+(const Cube &a) {
            return Cube(length + a.length, breadth + a.breadth, height + a.height);
        }
};
Cube Input() {
    int a, b, c;
    cout << "Enter length, breadth and height: ";
    cin >> a >> b >> c;
    return Cube(a, b, c);
}
int main() {
    Cube x = Input();
    Cube y = Input();
    Cube z = x + y;
    cout << "The new Volume is = " << z.Volume();
    return 0;
}