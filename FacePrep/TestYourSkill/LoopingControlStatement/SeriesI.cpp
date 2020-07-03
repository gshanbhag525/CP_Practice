#include <iostream>

using namespace std;

int main()
{
    int n;
    float temp = 0.5f;
    cin >> n;
    cout << temp << " ";
    if (n > 1)
    {

        for (int i = 2; i <= n; i++)
        {
            float pat = temp * 3;
            cout << pat << " ";
            temp = pat;
        }
    }
    return 0;
}

/*

Series I
Write a program to generate the first 'n' terms of the following series 0.5, 1.5, 4.5, 13.5, ...
Input Format:

The input is an integer 'n' which denotes the number of terms to be printed in the series.

Output Format:

Print the series and refer the sample output for formatting.

Sample Input:

5

Sample Output:

0.5 1.5 4.5 13.5 40.5

*/