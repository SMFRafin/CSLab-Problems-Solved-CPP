#include <iostream>
using namespace std;
class Cube
{
    private: 
    int n;
    public:
    Cube()
    {
        cout << "Enter an integer: ";
        cin >> n;
        for (int i = 1; i <=n; i++)
        {
            cout << "Cube of " << i << " = " << i*i*i << endl;
        }
        
    }
    ~Cube()
    {
        cout << "Destructor ran";
    }

};

int main()
{
    Cube X;
    return 0;
}