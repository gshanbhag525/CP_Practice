#include <iostream>

using namespace std;

struct Distance
{

    int feet;

    float inch;

}

d1,
    d2, sum;

int main()

{

    cin >> d1.feet;

    cin >> d1.inch;

    cin >> d2.feet;

    cin >> d2.inch;

    sum.feet = d1.feet + d2.feet;

    sum.inch = d1.inch + d2.inch;

    if (sum.inch > 12)

    {

        ++sum.feet;

        sum.inch -= 12;
    }
    cout << sum.feet << "'"
         << "-" << sum.inch << '"';

    return 0;
}

/* Add two distances in inch-feet system
Write a program to add two distances in inch feet system using Structure
INPUT FORMAT:

Input 1: Inch1 and feet1

Input 2 : Inch2 and feet2

OUTPUT FORMAT:

Sum of Distance

SAMPLE INPUT:

23

4.7

22

7.5

SAMPLE OUTPUT:

44'-6.7" */
