#include <iostream>
using namespace std;

class Volume
{
private:
    int lenght,breadth,height;
    
public:
    Volume(int x, int y, int z):lenght(x), breadth(y), height(z){}

    const int printVol() 
    {
        int volume;
        volume = lenght * breadth * height;
        return volume; 
    }
    
};

int main()
{
    Volume X(3,8,6);
    cout << "Volume is : " << X.printVol();
    return 0;
}

