#include <iostream>

using namespace std;

class Average{

   public:

   static float printAvg(float x, float y, float z){

       float avg;
       avg = (x+y+z)/3;
       return avg;

   }

};

int main(){

   float x, y,z;
   cout<<"Enter three numbers: ";
   cin >> x>>y>>z;
   cout<<"The average is: "<<Average::printAvg(x,y,z)<<endl;
   return 0;
}