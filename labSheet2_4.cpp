#include <iostream>
#include<cmath>
using namespace std;

class Triangle
{
    private: 
    int side1,side2,side3;
    public :
    Triangle (int x, int y, int z)
    {
        side1 = x;
        side2 = y;
        side3 = z;
    }
    void Area(){
        float s = (side1+ side2 + side3)/2.0;
        cout << "Area : " << sqrt(s*(s-side1)*(s-side2)*(s-side3)) << endl;
        cout << "Perimeter : " << (side1+ side2 + side3) <<endl;
    }
};

int main()
{
    Triangle X(3,4,5);
    X.Area();
    return 0;
}