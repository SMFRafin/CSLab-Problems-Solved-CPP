#include <iostream>
using namespace std;

//Frequency of a character in a string using pointer of an object
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
    void frequency()
    {
        int count=0;
        char ch;
        cout<<"\nEnter a character to find its frequency: ";
        cin>>ch;
        for(size_t i =0; str[i]!='\0';i++)
        {
            if(str[i]==ch)
            {
                count++;
            }
        }
        cout<<"\nFrequency of "<<ch<<" is "<<count<<"\n";
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
    ptr->frequency();
    String Y(*ptr);
    Y.getString();
    Y.frequency();
    return 0;

}
