#include <iostream>

using namespace std;

int main()

{

    int n, Diag1 = 0, Diag2 = 0, i, j;

    cin >> n;

    int Matrix[n][n];

    for (i = 0; i < n; i++)

    {

        for (j = 0; j < n; j++)

        {

            cin >> Matrix[i][j];
        }
    }

    for (i = 0; i < n; i++)

    {

        for (j = 0; j < n; j++)

        {

            if (i == j)

            {

                Diag1 += Matrix[i][j];
            }

            if (i + j + 1 == n)

            {

                Diag2 += Matrix[i][j];
            }
        }
    }

    if (Diag1 == Diag2)

        cout << "Yes";

    else

        cout << "No";

    return 0;
}

/* Magic square
A magic square is an arrangement of numbers (usually integers) in a square grid, there numbers in the forward and backward main diagonals, all add up to the same number. Write a program to find whether a given matrix is a magic square or not.
Input Format:

The input consists of (n*n+1) integers. 

The first integer corresponds to the number of rows/columns in the matrix. 

The remaining integers correspond to the elements in the matrix. 

The elements are read in row-wise order, the first row first, then second row and so on. 

Assume that the maximum value of m and n is 5.

Output Format:

Print yes if it is a magic square. Print no if it is not a magic square.

Sample Input:

2

4 5

5 4

Sample Output:

No */