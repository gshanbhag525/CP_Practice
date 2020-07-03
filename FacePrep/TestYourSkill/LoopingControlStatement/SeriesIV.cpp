#include <iostream>
using namespace std;
main()
{
    int n, a = 1, b = 2;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            cout << i * i - a << " ";
        else
            cout << i * i - b << " ";
    }
}

/*

Series IV
Write a program to generate the following series 0,2,8,14,...,34.
Input format:

The input is an integer which denotes 'n'.

Output format:

Print the series and refer the sample output for formatting.

Sample Input:

6

Sample Output:

0 2 8 14 24 34

*/