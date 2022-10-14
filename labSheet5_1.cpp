#include <iostream>
using namespace std;


class Frequency
{
    public:
    char str[100];
    char c;
    Frequency()
    {
        c='\0';
    }
    void getString()
    {
        cout<<"Enter a string: ";
        cin>>str;
    }
    void count()
    {
        int count=0;
        for(size_t i =0; str[i]!='\0';i++)
        {
            if (str[i]==c)
            {
                count++;
            }
            
        }
        cout<<"\nFrequency of "<<c<<" is "<<count;
       
    }
    
    Frequency(const Frequency &X)
    {
        str[100]=X.str[100];
        c=X.c;
    }
    ~Frequency()
    {
        cout<<"\nDestructor called";
    }
};

int main()
{
    Frequency X;
    Frequency *ptr;
    ptr=&X;
    ptr->getString();
    cout<<"Enter a character: ";
    cin>>ptr->c;
    ptr->count();
    Frequency Y(*ptr);
    Y.count();
    return 0;

}