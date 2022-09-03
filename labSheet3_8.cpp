#include <iostream>
using namespace std;

class Strong
{
    private:
    int n,i,j,k,n1,num,strnum,fact;
    public:
    Strong()
    {
        cout << "Enter the starting range: ";
        cin >> n;
        cout << "Enter the ending range: ";
        cin >> n1;
        cout << "The strong numbers are: "<< endl;
        for ( i = n; i <=n1; i++)
        {
            num = i;
            strnum = 0;
            for (j= i; j > 0 ; j=j/10)
            {
                fact = 1;
                for (k=1;k<=j%10;k++)
                {
                    fact = fact*k;
                }
                strnum = strnum + fact;
            }
            if (strnum == num)
            {
                cout << num << endl;
            }
            
        }
        
    }
};

int main()
{
    Strong X;
    return 0;
}