#include <iostream>
using namespace std;

//Lenght of a string using pointer of an object
//Using class and copy constructor

class String
{
    public:
    char str[100];
    String()
    {
        str[100]='\0';
    }
    void getString()
    {
        cout<<"Enter a string: ";
        cin>>str;
    }
    void length()
    {
        int count=0;
        for(size_t i =0; str[i]!='\0';i++)
        {
            count++;
        }
        cout<<"\nLength of string is "<<count<<"\n";
    }
    String(const String &X)
    {
        str[100]=X.str[100];
    }
    ~String()
    {
        cout<<"\nDestructor called";
    }
};

int main()
{
    String X;
    String *ptr;
    ptr=&X;
    ptr->getString();
    ptr->length();
    String Y(*ptr);
    Y.getString();
    Y.length();
    return 0;

}
