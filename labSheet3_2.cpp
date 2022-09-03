#include <iostream>
using namespace std;

class Binary
{
private:
    int n,bina=0,deci=0,bina1=0,deci1=0,bina2=0,deci2=0;    
public:
    Binary()
    {
        cout << "Enter a decimal number:";
        cin >> n;
        deci = n;
        int i= 1, j=n;
        bina=0;
        for(j=n;j>0;j/=2)
        {
            bina +=(n%2)*i;
            i*=10;
            n/=2;
        }
        cout << "For no parameter consturctor Binary number is: "<< bina << endl;
    }
    Binary(int n1, int n2)
    {
        deci1 = n1;
        deci2 = n2;
        int i= 1;
        for (int j = n1; j > 0;j/=2)
        {
            bina1+=(n1%2)*i;
            i*=10;
            n1/=2;
        }
        cout << "For two parameter constauctor Binary number is: " << bina1 << endl;
        i= 1;
        for (int j = n2; j>0 ; j/=2)
        {
            bina2 +=(n2%2)*i;
            i*=10;
            n2/=2;
        }
        cout << "For two parameter constructor Binary number is: "<< bina2 << endl;
        
    }
    

};
int main()
{
    int n,n1,n2;
    Binary X;
    cout << "Enter two decimal numbers: ";
    cin >>n1 >> n2;
    Binary Y(n1, n2);
    return 0;
}