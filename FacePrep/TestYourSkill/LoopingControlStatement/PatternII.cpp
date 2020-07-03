#include <iostream>
using namespace std;
int main()
{
    int rows;
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}


/*n
Pattern II
Write a program to print the following pattern.
Sample Input:

5

Sample Output:

1
3*2
4*5*6
10*9*8*7
11*12*13*14*15
*/