#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cin >> n;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
            cout << n;
        n += 1;
        cout << endl;
    }
    n -= 1;
    for (i = 4; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
            cout << n;
        cout << endl;
        n -= 1;
    }
    return 0;
}



/*

Pattern I
Write a program to print the following pattern.
Sample Input:

3

Sample Output:

3 
44 
555 
6666 
6666 
555 
44 
3


*/

