#include <iostream>
using namespace std;
class Binary
{
private: 
int n;
public:
    Binary()
    {
        int i=1,j=n, bina=0;
        cout<<"Enter a Decimal  number :";
        cin>>n;
        for(j=n;j>0;j=j/2)
        {
            bina=bina+(n%2)*i;
            i=i*10;
            n=n/2;
        }
    cout<<"Binary number : "<< bina<<endl;
    }
    ~Binary()
    {
        cout<<"Destructor ran "<<endl;
    }
};
int main()
{
    Binary X;
    return 0;
}