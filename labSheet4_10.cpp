#include <iostream>
using namespace std;

class DiffBetweenTwoTimePeriod
{
    public:
    int hour;
    int minute;
    int second;
    
    DiffBetweenTwoTimePeriod()
    {
        hour = 0;
        minute = 0;
        second = 0;
    }
    
    void getDiffBetweenTwoTimePeriod(DiffBetweenTwoTimePeriod t1, DiffBetweenTwoTimePeriod t2)
    {
        if(t2.second > t1.second)
        {
            --t1.minute;
            t1.second += 60;
        }
        second = t1.second - t2.second;
        if(t2.minute > t1.minute)
        {
            --t1.hour;
            t1.minute += 60;
        }
        minute = t1.minute - t2.minute;
        hour = t1.hour - t2.hour;
    }

    void displayTime()
    {
        cout << "Hour: " << hour << endl;
        cout << "Minute: " << minute << endl;
        cout << "Second: " << second << endl;
    }
    ~DiffBetweenTwoTimePeriod()
    {
        cout << "Destructor called" << endl;
    }


};

int main()
{
    DiffBetweenTwoTimePeriod t1, t2, diff;
    cout << "Enter start time:" << endl;
    cout << "Enter hours, minutes and seconds respectively: ";
    cin >> t1.hour >> t1.minute >> t1.second;
    cout << "Enter stop time:" << endl;
    cout << "Enter hours, minutes and seconds respectively: ";
    cin >> t2.hour >> t2.minute >> t2.second;
    diff.getDiffBetweenTwoTimePeriod(t1, t2);
    cout << "TIME DIFFERENCE: " << endl;
    diff.displayTime();
    return 0;
}