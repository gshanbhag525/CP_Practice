#include <iostream>

using namespace std;

int power(int x, int y)

{

    if (y != 0)

        return (x * power(x, y - 1));

    else

    {

        return 1;
    }
}

int main()

{

    int a, b;

    cin >> a >> b;

    cout << "Enter the value of a"
         << "\n"
         << "Enter the value of n"
         << "\n";

    cout << "The value of " << a << " power " << b << " is " << power(a, b);
}

/* Compute a^n
Write a program to compute a^n (a power n) using recursion.
INPUT & OUTPUT FORMAT:

Input consists of 2 integers

Refer sample input and output for formatting specifications

SAMPLE INPUT & OUTPUT:

Enter the value of a

2

Enter the value of n

8

The value of 2 power 8 is 256 */