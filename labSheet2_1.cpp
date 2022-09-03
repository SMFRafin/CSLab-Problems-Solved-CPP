#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int roll_no;
public:
    Student(string name1, int rollNo)
    {
        name = name1;
        roll_no = rollNo;
    }
};

int main(){
    Student X("John",2 );
    return 0;

}
