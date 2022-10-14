#include <iostream>
using namespace std;

class AddComplexNumByStruct
{
    public:
        struct ComplexNum
        {
            int real;
            int imaginary;
        };
        ComplexNum addComplexNum(ComplexNum num1, ComplexNum num2)
        {
            ComplexNum sum;
            sum.real = num1.real + num2.real;
            sum.imaginary = num1.imaginary + num2.imaginary;
            return sum;
        }
};

int main()
{
    AddComplexNumByStruct::ComplexNum num1, num2, sum;
    cout << "Enter first complex number: ";
    cin >> num1.real >> num1.imaginary;
    cout << "Enter second complex number: ";
    cin >> num2.real >> num2.imaginary;
    AddComplexNumByStruct obj;
    sum = obj.addComplexNum(num1, num2);
    cout << "Sum = " << sum.real << " + " << sum.imaginary << "i" << endl;
    return 0;
}