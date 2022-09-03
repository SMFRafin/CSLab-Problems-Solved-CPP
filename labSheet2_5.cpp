#include <iostream>
using namespace std;

class Rectangle{
private:
    int len,wid;
public:
    Rectangle(int length, int breadth)
    {
        len = length;
        wid = breadth;
    }

    int Area()
    {
        int area;
        area = len*wid;

        return area;
    }
};

int main()
{
    Rectangle X(4,5), Y(5,8);
    cout <<"Area: "<< X.Area() <<"\n";
    cout <<"Area: "<< Y.Area();
    return 0;
}