// Create a base class called shape.
// Use this class to store two double type values that could be used to compute
// the area of figures.Derive two specific classes called triangle and rectangle from the base shape.
// Add to the base class, a member function get_data() to initialize the base class data members and
// another member function display_area() as a virtual function and redefine this function
// in the derived classes to suit their requirements.Using these three classes,
// design a program that will accept dimensions of a triangle or a rectangle interactively and
// display the area.Remember the two values given as input will be treated as lengths of two sides
// in the case of rectangles and as base and height in the case of triangles and used as follows.
// Area of rectangle = x *y
// Area of triangle = 1 / 2 * x * y
#include <iostream>
using namespace std;
class Shape {
    public:
        double a, b;
        void get_data()
        {
            cin >> a >> b;
        }
        virtual void display_area() = 0;
};
class Triangle : public Shape {
    public:
        void display_area() {
            cout << "Area of triangle " << 0.5 * a * b << endl;
        }
};
class Rectangle : public Shape {
    public:
        void display_area() {
            cout << "Area of rectangle " << a * b << endl;
        }
};
int main() {
    Triangle t;
    Shape *st = &t;
    cout << "Enter base and height: ";
    st->get_data();
    st->display_area();
    Rectangle r;
    Shape *sr = &r;
    cout << "Enter length and breadth: ";
    sr->get_data();
    sr->display_area();
    return 0;
}