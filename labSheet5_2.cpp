#include <iostream>
using namespace std;

//Remove all except alphabets from a string using pointer of an prime object

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
    RemoveExecptAlphabet *ptr;
    ptr=&obj;
    ptr->getString();
    ptr->remove();
    RemoveExecptAlphabet obj1(*ptr);
    obj1.remove();
    return 0;
}