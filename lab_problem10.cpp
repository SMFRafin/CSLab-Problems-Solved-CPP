#include <iostream>
using namespace std;

int main(){
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (year %4 ==0 && year %100 != 0 || year% 400 == 0)
    {
        cout << "The year is a Leap year";
    }
    else
    cout << "The year is not a Leap year";

    return 0;
    
}