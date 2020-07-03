#include <iostream>
using namespace std;
int main()
{
    int count, size, t1 = 0, t2 = 1, next;
    cin >> count;
    if (count == 1)
        cout << t1;
    else if (count == 2)
        cout << t2;
    else if (count > 2)
    {
        for (int i = 3; i <= count; i++)
        {
            next = t1 + t2;
            t1 = t2;
            t2 = next;
        }
        cout << t2;
    }
    return 0;
}

/*

Amoeba multiplication
The Environmental Eco Club has discovered a new Amoeba that grows in the order of a Fibonacci series every month. They are exhibiting this amoeba in a national conference. They want to know the size of the amoeba at a particular time instant. If a particular month’s index is given, write a program to display the amoeba’s size. For Example, the size of the amoeba on month 1, 2, 3, 4, 5, 6,... will be 0, 1, 1, 2, 3, 5, 8.... respectively.
INPUT & OUTPUT FORMAT:

The input is an integer which denotes the count of the month.

The output is an integer denoting the amoeba size.

Refer the sample output for formatting.

SAMPLE INPUT:

7

SAMPLE OUTPUT:

8


*/