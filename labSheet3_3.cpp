#include <iostream>
using namespace std;

class APS
{
    private:
    int n,n1,dif,sum,lt;
    public:
    APS()
    {
        sum=0;
        cout << "Enter the starting number: ";
        cin >> n;
        cout << "Enter the number of terms: ";
        cin >> n1;
        cout << "Enter the difference: ";
        cin >> dif;
        sum= (n1*(2*n+(n1-1)*dif))/2;
        lt = n+(n1-1)*dif;
        cout << "The sum of AP series: "<< endl;
        for (int  i = n; i<=lt; i=i+dif)
        {
            if (i!=lt)
            {
                cout << i << " + ";
            }
            else
                cout << i << " = " << sum << endl;
        }
        
    }
    ~APS()
    {
        cout << "Destructor ran";
    }
};

int main()
{
    APS X;
}