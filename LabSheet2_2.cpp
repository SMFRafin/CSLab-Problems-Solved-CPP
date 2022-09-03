#include <iostream>
using namespace std;

class Student{

private:
    string name; 
    int roll_no;
    int phone_no;
    string address;
public: 
    Student(string name1, int rollNo, int phoneNo, string adrress1)
    {
        name = name1;
        roll_no = rollNo;
        phone_no = phoneNo;
        address = adrress1;
    }
    void Print()
    {
        cout << "Name : " << name << "\n";
        cout << "Roll : " << roll_no << "\n";
        cout << "Phone : " << phone_no<< "\n";
        cout << "Address : " << address << "\n";
    }

};

int main()
{
    Student X("Sam", 2, 32434234, "Dhaka");
    Student Y("John", 1 , 3545345, "Pabna");
    X.Print();
    Y.Print();
    return 0;
}