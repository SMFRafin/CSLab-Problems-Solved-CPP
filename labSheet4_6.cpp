#include <iostream>
using namespace std;

class RemoveExecptAlphabet
{
    public:
    char str[100];
    RemoveExecptAlphabet()
    {
        str[0]='\0';
    }
    void getString()
    {
        cout<<"Enter a string: ";
       cin.getline(str,100);
    }
    void remove()
    {
        for(size_t i =0; str[i]!='\0';i++)
        {
            if (str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
            {
                cout<<str[i];
            }
            
        }
        cout<<endl;
    }
    
    RemoveExecptAlphabet(const RemoveExecptAlphabet &obj)
    {
        for(size_t i =0; obj.str[i]!='\0';i++)
        {
            str[i]=obj.str[i];
        }
    }
    ~RemoveExecptAlphabet()
    {
        cout<<"\nDestructor called";
    }
};

int main()
{
    RemoveExecptAlphabet obj;
    obj.getString();
    obj.remove();
    RemoveExecptAlphabet obj1;
    obj1=obj;
    obj1.remove();
    return 0;
}