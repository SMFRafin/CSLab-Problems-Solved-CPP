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
    
    Frequency(const Frequency &obj)
    {
        c=obj.c;
    }
    ~Frequency()
    {
        cout<<"\nDestructor called";
    }
};

int main()
{
    Frequency obj;
    obj.getString();
    cout<<"Enter a character: ";
    cin>>obj.c;
    obj.count();
    Frequency obj1;
    obj1=obj;
    obj1.count();
    return 0;
}