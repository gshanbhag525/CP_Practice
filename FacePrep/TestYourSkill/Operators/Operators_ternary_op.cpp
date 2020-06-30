#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    n % 2 != 0 ? cout << "Odd" : cout << "Even";
}

/*
Question:

Ternary Operator
A conditional operator is also known as ternary operator [exp ? true : false] which can be used to make an either-or choice. Write a C++ program to get a number from the user and find out whether it is odd or even.
INPUT & OUTPUT FORMAT:

The input is an integer denoting the given number.

If the given number is even, print "Even". Otherwise, print "Odd".

SAMPLE INPUT & OUTPUT:

5

Odd


*/