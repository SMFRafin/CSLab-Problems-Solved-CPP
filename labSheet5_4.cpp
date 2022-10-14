#include <iostream>
using namespace std;

//Concatenate two strings using pointer of an prime object

class Concatenate
{
    public:
    string str1;
    string str2;
    string str3;
    Concatenate()
    {
        str1="";
        str2="";
        str3="";
    }
    void getString()
    {
        cout<<"Enter first string: ";
        cin>>str1;
        cout<<"Enter second string: ";
        cin>>str2;
    }
    void concatenate()
    {
        str3=str1+str2;
        cout<<"\nConcatenated string is "<<str3;
    }
    
    Concatenate(const Concatenate &X)
    {
        str1=X.str1;
        str2=X.str2;
        str3=X.str3;
    }
    ~Concatenate()
    {
        cout<<"\nDestructor called";
    }
};

int main()
{
    Concatenate X;
    Concatenate *ptr;
    ptr=&X;
    ptr->getString();
    ptr->concatenate();
    Concatenate Y(*ptr);
    Y.concatenate();
    return 0;
    
}