#include <iostream> 
using namespace std;

int main(){

    int a,b,temp;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Before swapping : a = " << a << " b = "<< b;
    temp = a;
    a = b;
    b = temp;
    cout << "\nAfter swapping : a = " << a << " b = " << b;


    return 0;
}