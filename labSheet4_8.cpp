#include <iostream>
#include <string.h>
using namespace std;

class StrConcatenate
{
    public:
    char Str1[100],Str2[100];
    StrConcatenate()
    {
        Str1[0] = '\0';
        Str2[0] = '\0';
    }
    void getstring()
    {
        cout << "Enter 1st string:";
        cin >> Str1;
        cout << "\nEnter 2nd string:";
        cin >> Str2;
    }
    void Concatenate()
    {
        strcat(Str1,Str2);
        cout << Str1<<endl;
    }
    StrConcatenate(const StrConcatenate &X)
    {
        Str1[100]=X.Str1[100];
        Str2[100]=X.Str2[100];
    }
    ~StrConcatenate()
    {
        cout <<"\nDestructor called";
    }

};

int main()
{
    StrConcatenate X;
    X.getstring();
    X.Concatenate();
    StrConcatenate Y;
    Y = X;
    Y.getstring();
    Y.Concatenate();
    return 0;
}