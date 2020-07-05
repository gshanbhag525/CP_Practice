#include <iostream>
using namespace std;
int main()
{
    int hour1, minute1, second1;
    int hour2, minute2, second2;
    int diff_hour, diff_minute, diff_second;
    cin >> hour1 >> minute1 >> second1;
    cin >> hour2 >> minute2 >> second2;
    if (second2 > second1)
    {
        minute1--;
        second1 += 60;
    }
    diff_second = second1 - second2;
    if (minute2 > minute1)
    {
        hour1--;
        minute1 += 60;
    }
    diff_minute = minute1 - minute2;
    diff_hour = hour1 - hour2;
    cout << diff_hour << ":" << diff_minute << ":" << diff_second;
    return 0;
}

/* Difference Between Two Time Periods
Write a program to calculate difference between two time periods
INPUT FORMAT:

Input 1 : hours,minutes and seconds

Input 2 : hours,minutes and seconds

OUTPUT FORMAT:

TIME DIFFERENCE

SAMPLE INPUT:

12 15 24 

8 15 23                                            

SAMPLE OUTPUT:                                                                        

4:0:1 */