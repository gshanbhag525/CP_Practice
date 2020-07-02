#include <iostream>
using namespace std;
int main()
{
    int row, col, n;
    int col2, col3, col4, col5;
    cin >> row >> col >> n;
    col2 = col * 2;
    col3 = col * 3;
    col4 = col * 4;
    col5 = col * 5;
    if (n > 1 && n <= col)
        cout << "Yes";
    else if (n == col || n == col2 || n == col3 || n == col4 || n == col5)
        cout << "Yes";
    else if (n == col + 1 || n == col2 + 1 || n == col3 + 1 || n == col4 + 1 || n == col5 + 1)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}

/*

Question:
Mango tree - I
Dora is so much interested in gardening and hence she plants more trees in her garden. She plants trees in a rectangular fashion with the order of rows and columns and numbers the trees in a row-wise order. She planted the mango tree only in the 1st row, 1st column and last column. So, given the tree number, your task is to find out whether the given tree is a mango tree or not? Now, write a program to check whether the given number denotes a mango tree or not.
INPUT FORMAT:

Input consists of 3 integers.

The first input denotes the number of rows.

The second input denotes the number of columns.

The third input denotes the tree number.

OUTPUT FORMAT:

If the given number is a mango tree, print "Yes". Otherwise, print "No"

Refer the sample output for formatting.

SAMPLE INPUT:

5

5

11

SAMPLE OUTPUT:

Yes

*/