#include <iostream>
#include <cmath>
using namespace std;
bool iskaprekar(int n)
{
    if (n == 1)
        return true;
    int sq_n = n * n;
    int count_digits = 0;
    while (sq_n)
    {
        count_digits++;
        sq_n /= 10;
    }
    sq_n = n * n;
    for (int r_digits = 1; r_digits < count_digits; r_digits++)
    {
        int eq_parts = pow(10, r_digits);

        if (eq_parts == n)
            continue;

        int sum = sq_n / eq_parts + sq_n % eq_parts;
        if (sum == n)
            return true;
    }
    return false;
}
int main()
{
    int i;
    cin >> i;
    if (iskaprekar(i))
        cout << "Kaprekar Number" << endl;
    else
        cout << "Not a Kaprekar Number" << endl;
    return 0;
}

/*

Kaprekar number
Consider an n-digit number k. Square it and add the right n digits to the left n or n-1 digits. If the resultant sum is k, then k is called a Kaprekar number. For example, 9 is a Kaprekar number since 92 = 81 & 8 + 1 = 9 297 is a Kaprekar number as 2972 = 88209 & 88 + 209 = 297 Write a program to find whether the given number is a Kaprekar number or not.
INPUT & OUTPUT FORMAT:

Input consists of a single integer.

Refer sample output for details.

SAMPLE INPUT & OUTPUT:

9

Kaprekar Number 
*/