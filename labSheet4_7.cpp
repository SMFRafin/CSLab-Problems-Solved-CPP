#include <iostream>
#include<string.h>
using namespace std;

class StrLength
{
    public:
    char Str[100];
    StrLength()
    {
        Str[0] = '\0';
    }
    void getString()
    {
        cout << "Enter a string: ";
        cin >> Str;
    }
    void Length()
    {
        int length =0;
        length = strlen(Str);
        cout << length<<endl;
        
    }
    StrLength(const StrLength &X)
    {
        Str[100] = X.Str[100];
    }
    ~StrLength()
    {
        cout << "\nDestructor called";
    }

};

int main()
{
    StrLength X;
    X.getString();
    X.Length();
    StrLength Y;
    Y = X;
    Y.Length();
    return 0;
}
