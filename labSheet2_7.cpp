#include <iostream>
using namespace std;

class Area
{
private:
    int lenght,breadth;
public:
    Area()
    {
        cout << "Enter the length and breadth: ";
        cin >> lenght >> breadth;
    }

    int returnArea()
    {
        int area;
        area = lenght * breadth;
        return area;
    }

};

int main()
{
    Area X;
    cout << "Area : " << X.returnArea();
    return 0;
}