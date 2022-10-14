#include <iostream>
using namespace std;

class SwapNumbers 
{
    private:
    int a, b;
    public:
    SwapNumbers()
    {
        cout << "\nEnter two numbers: ";
        cin >> a >> b;
    }
    void Swap()
    {
        int *ptr1 = &a;
        int *ptr2 = &b;
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }
    void Display()
    {
        cout << "After swapping: " << a << " " << b;
    }
    SwapNumbers(const SwapNumbers &X)
    {
        a = X.a;
        b = X.b;
    }
    ~SwapNumbers(){}
};

int main()
{
    SwapNumbers X;
    X.Swap();
    X.Display();
    SwapNumbers Y;
    X= Y;
    Y.Swap();
    Y.Display();
}