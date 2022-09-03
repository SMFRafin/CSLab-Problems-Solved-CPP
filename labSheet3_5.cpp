#include <iostream>
using namespace std;

class Floyd
{
    private:
    int n, i, j, k=1;
    public:
    Floyd()
    {
        cout << "Enter the rows: ";
        cin >> n;
        for ( i = 1; i <=n; i++)
        {
            for(j =1; j<=i;j++)
            {
                cout <<" "<< k ;
                k++;
            }
            cout << "\n";
        }
        
    }
    ~Floyd()
    {
        cout << "Destructor ran";
    }

};

int main()
{
    Floyd X;
    return 0;
}