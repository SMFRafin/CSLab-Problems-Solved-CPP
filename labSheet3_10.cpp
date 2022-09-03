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
    Strong(int x, int y)
    {
        fact = 0;
        cout << "The strong numbers are w/overloading: "<< endl;
        for ( i = x; i <=y; i++)
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
    int x,y;
    Strong X;
    cout << "Enter the starting range: ";
    cin >> x;
    cout << "Enter the ending range: ";
    cin >> y;
    Strong Y(x,y);
    return 0;
}
