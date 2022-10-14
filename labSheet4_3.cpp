#include <iostream>
using namespace std;

class ArrPointer
{
    private:
    int x[5];
    public:
    ArrPointer()
    {
        cout << "\nEnter an array: ";
        for (size_t i = 0; i < 5; i++)
        {
            cin >> x[i];
        }
    }
    void Access()
    {
        int *ptr = &x[0];
        cout << "Elements of the arrays are: ";
        for (size_t i = 0; i <5; i++)
        {
            cout << *ptr<<" ";
            *ptr++;
        }
        
    }
    ArrPointer(const ArrPointer &X)
    {
        x[5] = X.x[5];
    }
    ~ArrPointer(){}

};

int main()
{
    ArrPointer X;
    X.Access();
    ArrPointer Y;
    X= Y;
    Y.Access();
}
