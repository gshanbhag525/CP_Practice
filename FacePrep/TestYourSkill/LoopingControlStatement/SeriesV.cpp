#include <iostream>
using namespace std;
main()
{
    int n, st = 11;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << st * st << " ";
        st += 4;
    }
}

/*

Series V
Write a program to generate the first 'n' terms of the following series 121, 225, 361,...
INPUT & OUTPUT FORMAT:

The input is an integer 'n' which denotes the number of terms to be printed in the series.

Print the series and refer the sample output for formatting.

SAMPLE INPUT:

4

SAMPLE OUTPUT:

121 225 361 529


*/