#include <iostream>

int main()

{

    int n, j;

    std::cin >> n;

    for (int I = 1; I <= n; I++)

    {

        for (j = 1; j <= I; j++)

            if (j < I)

            {

                std::cout << I << "*";
            }

            else

            {

                std::cout << I << "\n";
            }
    }

    for (int I = n; I >= 0; I--)

    {

        for (j = 1; j <= I; j++)

            if (j < I)

                std::cout << I << "*";

            else

                std::cout << I << "\n";
    }
}

/* Pattern III
Write a program to print the following pattern.
Sample Input:

5

Sample Output:

1 
2*2 
3*3*3 
4*4*4*4 
5*5*5*5*5 
5*5*5*5*5 
4*4*4*4 
3*3*3 
2*2 
1 */