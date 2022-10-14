#include <iostream>
using namespace std;

//Lenght of a string using pointer of an prime object

class Length
{
    public:
    char str[100];
    int length;
    Length()
    {
        length=0;
    }
    void getString()
    {
        cout<<"Enter a string: ";
        cin>>str;
    }
    void count()
    {
        for(size_t i =0; str[i]!='\0';i++)
        {
            length++;
        }
        cout<<"\nLength of string is "<<length;
       
    }
    
    Length(const Length &X)
    {
        length=X.length;
    }
    ~Length()
    {
        cout<<"\nDestructor called";
    }
};

int main()
{
    Length X;
    Length *ptr;
    ptr=&X;
    ptr->getString();
    ptr->count();
    Length Y(*ptr);
    Y.count();
    return 0;
    
}
