#include <iostream>

using namespace std;

int main()

{

    int sun, mon, tue, wed, thr, fri, sat;

    int b, br, r1, r2, r3, r4, r5, r6, r7, r8 = 0;

    int ed, td, tr;

    std::cin >> sun >> mon >> tue >> wed >> thr >> fri >> sat;

    r1 = sun * 150;

    r7 = sat * 125;

    if (mon <= 8)

    {
        r2 = mon * 100;
    }

    else if (mon > 8)

    {
        b = mon - 8;

        br = (b * 100) + b * 15;

        r2 = br + 800;
    }

    if (tue <= 8)

    {
        r3 = tue * 100;
    }

    else if (tue > 8)

    {
        b = tue - 8;

        br = b * 15 + (b * 100);

        r3 = br + 800;
    }

    if (wed <= 8)

    {
        r4 = wed * 100;
    }

    else if (wed > 8)

    {
        b = wed - 8;

        br = b * 15 + (b * 100);

        r4 = br + 800;
    }

    if (thr <= 8)

    {
        r5 = thr * 100;
    }

    else if (thr > 8)

    {
        b = thr - 8;

        br = b * 15 + (b * 100);

        r5 = br + 800;
    }

    if (fri <= 8)

    {
        r6 = fri * 100;
    }

    else if (fri > 8)

    {
        b = fri - 8;

        br = b * 15 + (b * 100);

        r6 = br + 800;
    }

    td = mon + tue + wed + thr + fri;

    if (td > 40)

    {
        ed = td - 40;

        r8 = (ed * 25) + (ed * 100);
    }

    tr = r1 + r2 + r3 + r4 + r5 + r6 + r7 + r8;

    std::cout << tr;
}

/*

Time sheet
Jeevitha just started to work as a programming trainer for UIT's Placement Cell. 
She is paid Rs.100 an hour, with a few exceptions.
 She earns an extra Rs.15 an hour for any part of a day where she works for more than 8 hours, 
 and an extra Rs.25 an hour for hours beyond 40 in any one week. 
 Also, she earns a 25% bonus for working on Saturdays and 
 a 50% bonus for working on Sundays. 
 The bonuses for Saturday and Sunday are computed based on the hours worked on those days. 
 And there is no bonus for working more than 40 hours in a week. 
 You'll be given the number of hours Jeevitha worked on each day in a week 
 (Sunday, Monday, ..., Saturday), and you need to compute her salary for the week.
INPUT & OUTPUT FORMAT:

Input consists of 7 integers less than or equal to 24 on separate lines

Print Jeevith's salary for a week.

SAMPLE INPUT:

0

8

8

8

10

6

0

SAMPLE OUTPUT:

4030

*/