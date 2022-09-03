#include <iostream> 
using namespace std;

int main(){

    int a,b,rem;
    float quot;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    rem = a%b;
    quot = (float)a/b;

    cout << "Quotient = " << quot  << endl << "Remainder = " << rem;
    return 0;
}