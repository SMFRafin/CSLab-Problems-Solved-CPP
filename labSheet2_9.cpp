#include <iostream>
#include <cmath>
using namespace std;

class Complex
{
private:
    float img, real;
public:
    Complex(int x,int y):img(x),real(y){}
    void getValue()
    {
        cout <<"Enter a real and imaginary number: ";
        cin >> img >> real;
    }
    void Sum(int a, int b, int c)
    {

    }
};


