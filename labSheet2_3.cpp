#include <iostream>
#include<cmath>
using namespace std;

class Trinangle{
private: 
    int side1,side2,side3;
public:
    void set_Value(int a ,int b, int c)
    {
        side1 = a;
        side2 = b;
        side3 = c;
    }
    void Area()
    {
        float area,s;
        s = (side1+ side2 + side3)/2.0;
        area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
        cout << "Area : " << area << "\n"; 
        cout << "Perimeter : " << (side1 + side2 + side3) << "\n";
    }

};

int main()
{
    Trinangle X;
    X.set_Value(3,4,5);
    X.Area();
    return 0;

}