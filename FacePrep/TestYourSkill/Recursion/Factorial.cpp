#include <iostream>
using namespace std;
int fact(int n)
{
    if (n > 1)
        return n * fact(n - 1);
    else
        return 1;
}
int main()
{
    int n;
    cin >> n;
    cout << "The factorial of " << n << " is " << fact(n);
    return 0;
}

/*

Factorial
Write a program to compute the factorial of a number using recursion.
INPUT AND OUTPUT FORMAT:

Input consists of an integer.

Refer sample input and output for formatting specifications.

SAMPLE INPUT & OUTPUT

5

The factorial of 5 is 120

    
*/