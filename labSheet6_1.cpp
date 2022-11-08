

#include <iostream>
#include <cmath>
using namespace std;

class Shape
{
    public:
    int Area();
    int Circumference();
};

class Rectangle: public Shape
{
    public:
    int length;
    int breadth;
    int getlength();
    int getbreadth();
};

class Circle: public Shape
{
    public:
    int radius;
    int getradius();
};

int Rectangle::getlength()
{
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    return length;
}

int Rectangle::getbreadth()
{
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;
    return breadth;
}

int Circle::getradius()
{
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    return radius;
}

int Shape::Area()
{
    Rectangle r;
    int l = r.getlength();
    int b = r.getbreadth();
    int area = l * b;
    cout << "The area of the rectangle is: " << area << endl;
    return area;
}

int Shape::Circumference()
{
    Circle c;
    int r = c.getradius();
    float circumference = 2 * 3.14 * r;
    cout << "The circumference of the circle is: " << circumference << endl;
    return circumference;
}

int main()
{
    Rectangle R;
    Circle C;
    R.Area();
    C.Circumference();
    return 0;
}