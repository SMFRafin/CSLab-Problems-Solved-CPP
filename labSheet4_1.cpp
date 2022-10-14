#include <iostream>
using namespace std;

class Matrix
{
    private:
    int n,m;
    public:
    Matrix()
    {
        n= 0;
        m= 0;
    }
    Matrix(int x, int y)
    {
        n= x;
        m= y;
    }
    void Calculate()
    {
    int arr1[40][40];
    int arr2[40][40];
    int sumarr[40][40];
    cout << "Enter the row and column number:  ";
    cin >> n >> m;
    cout << "Enter the elements for matrix 1: ";
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            cin >> arr1[i][j];
        }
        
    }
    cout << "Enter the elements for matrix 2: ";
     for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            cin >> arr2[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sumarr[i][j]=arr1[i][j]+arr2[i][j];
        }
        
    }
    
    cout << "\nMatrix 1: "<<endl;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            cout << arr1[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "\nMatrix 2: "<< endl;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            cout << arr2[i][j] <<"  ";
        }
        cout <<endl;
        
    }
    cout << "\nSum of matrixes are: "<<endl;   
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            cout << sumarr[i][j] << "  ";
        }
        cout << endl;
    }

    }
    Matrix(const Matrix &Ob1)
    {
        n= Ob1.n;
        m= Ob1.m;
    }
    
};


 int main()
 {
    int x,y;
    Matrix Ob1(x,y);
    Ob1.Calculate();
    Matrix Ob2;
    Ob1 = Ob2;
    Ob2.Calculate();
    return 0;
 }