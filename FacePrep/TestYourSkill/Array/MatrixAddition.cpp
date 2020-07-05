#include <iostream>

using namespace std;

int main()
{

    int r, c, mat1[100][100], mat2[100][100], sum[100][100], i, j;

    cin >> r >> c;

    for (i = 0; i < r; ++i)

        for (j = 0; j < c; ++j)

        {

            cin >> mat1[i][j];
        }

    for (i = 0; i < r; ++i)

        for (j = 0; j < c; ++j)

        {

            cin >> mat2[i][j];
        }

    // Adding Two matrices

    for (i = 0; i < r; ++i)

        for (j = 0; j < c; ++j)

        {

            sum[i][j] = mat1[i][j] + mat2[i][j];
        }

    // print the result

    for (i = 0; i < r; ++i)

        for (j = 0; j < c; ++j)

        {

            cout << sum[i][j] << " ";

            if (j == c - 1)

            {

                cout << "\n";
            }
        }

    return 0;
}


/* 
Matrix Addition
Raju has a square shaped puzzle made up of small square pieces containing numbers on them. He wants to rearrange the puzzle by changing the element of a row into a column element and column element into a row element without altering the shape of the puzzle. Help raju to solve this puzzle. FUNCTIONAL REQUIREMENTS: int** createArray(int,int); int getElement(int**,int,int); int addMatrix(int**,int**,int**,int,int);
Input Format:

Enter the row and column of a matrix Enter the matrix

Output Format:

Addition of a matrix

Sample Input:

2

2

1

2

3

4

1

2

3

4

Sample Output:

2 4

6 8s */