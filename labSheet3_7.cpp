#include <iostream>
using namespace std;

class Cube
{
    private: 
    int n,i;
    public:
    Cube()
    {
        cout << "Enter an integer: ";
        cin >> n;
        for (i = 1; i <=n; i++)
        {
            cout << "Cube of " << i << " = " << i*i*i << endl;
        }
    }
    Cube(int n, int i)
    {
        cout << "Enter a integer: ";
        cin >> n;
        for (i = 1; i <=n; i++)
        {
            cout << "Cube of " << i << " using overloading = " << i*i*i << endl;
        }
    }

};

int main()
{
    int x,y;
    Cube X;
    Cube Y(x,y);
    return 0;
    
}