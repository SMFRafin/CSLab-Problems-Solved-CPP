#include <iostream>
using namespace std;

class Area
{
private:
    int len,wid;
public:
    void SetDim()
    {
        cout << "Enter the length and breadth: ";
        cin >> len >> wid;
    }

    int getArea()
    {
        int area = len * wid;
        return area;
    }
};

int main()
{
    Area X;
    X.SetDim();
    cout << "Area is : " << X.getArea();
    return 0;
}