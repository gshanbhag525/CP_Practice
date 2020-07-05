#include <iostream>

using namespace std;

int main()

{

    int m, n;

    std::cin >> m >> n;

    int a[m][n];

    for (int i = 0; i < m; i++)

    {

        for (int j = 0; j < n; j++)

        {

            std::cin >> a[i][j];
        }
    }

    int max = a[0][0];

    for (int i = 0; i < m; i++)

    {

        max = a[i][0];

        for (int j = 0; j < n; j++)

        {

            if (max < a[i][j])

            {

                max = a[i][j];
            }
        }

        std::cout << max << "\n";
    }
}

/* Maximum element in each row
Raju is the maths teacher in high secondary school and provided mark sheet to students.In this class room, students are arranged in the form of rows and columns. Raju needs to find the highest mark in each rows. Help him to find out.
INPUT FORMAT:

The input consists of (m*n+2) integers. 

The first integer corresponds to m, the number of rows in the matrix and the second integer corresponds to n, the number of columns in the matrix. 

The remaining integers correspond to the elements in the matrix. 

The elements are read in row-wise order, the first row first, then second row and so on. 

Assume that the maximum value of m and n is 10.

OUTPUT FORMAT:

Refer to the sample output for details.

SAMPLE INPUT:

3

2

4 5

6 9

0 3

SAMPLE OUTPUT:

5

9

3 */