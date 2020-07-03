#include <iostream>
using namespace std;
main()
{
    int n, t = 11;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << t * t << " ";
        t += 4;
    }
}


/*

Series II
Write a program to generate the first 'n' terms of the following series 121, 225, 361,...
Input Format:

The input is an integer 'n' which denotes the number of terms to be printed in the series.

Output Format:

Print the series and refer the sample output for formatting.

Sample Input:

4

Sample Output:

121 225 361 529

*/