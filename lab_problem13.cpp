#include <iostream> 
using namespace std;

int main(){

    int i,n,t1=0, t2=1 ,t3;
    t3 = t1 + t2;
    cout << "Enter the number of the terms: ";
    cin >> n;
    cout << "Fibonacci Series: "<< t1 << " , " << t2;
    for ( i = 3; i <=n; ++i)
    {
        cout << " , "<<t3;
        t1 = t2;
        t2 = t3;
        t3 = t1 + t2;
    }

    return 0;
}