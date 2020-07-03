#include <iostream>
using namespace std;
int main()
{
    int row, col, treenum;
    cin >> row >> col >> treenum;
    if (row + col == treenum || (row + col) * 2 == treenum)
        cout << "It is a mango tree";
    else
        cout << "It is not a mango tree";
    return 0;
}


/*

Question:

Gardening
Dora is very much interested in gardening and she decides to plant more trees in her garden. She plants trees in the order of rows and columns. She numbered the trees in column wise order. She planted the mango trees only in the second column from both first and last. But later when the trees grew up, she forgot where she planted mango trees. So help her find out whether the given tree number is a number of mango trees or not. Display whether “It is a mango tree” or “It is not a mango tree”.
INPUT FORMAT:

Input consists of 3 integers.

First input corresponds to the number of rows.

Second input corresponds to the number of columns.

Third input corresponds to the tree number.

SAMPLE INPUT:

5

5

20

SAMPLE OUTPUT:

It is a mango tree

*/