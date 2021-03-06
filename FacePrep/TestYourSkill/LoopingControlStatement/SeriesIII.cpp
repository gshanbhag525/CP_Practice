#include <iostream>
using namespace std;
int main()
{
    int n, t = 6, c = 5;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << t << " ";
        t += (c * i);
    }
    cout << endl;
    return 0;
}

/*

Series III
Write a program to generate the first 'n' terms of the following series 6, 11, 21, 36, 56,...
Input Format:

The input is an integer 'n' which denotes the number of terms to be printed in the series.

Output Format:

Print the series and refer the sample output for formatting.

Sample Input:

6

Sample Output:

6 11 21 36 56 81

*/