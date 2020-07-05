#include <iostream>

using namespace std;

int main()

{

    int size;

    cin >> size;

    int i, num[15];

    int oddSum = 0, evenSum = 0;

    for (i = 0; i < size; i++)

        cin >> num[i];

    for (i = 0; i < size; i++)

    {

        if (num[i] % 2 == 0)

            evenSum = evenSum + num[i];

        else

            oddSum = oddSum + num[i];
    }

    cout << "The sum of the even numbers in the array is " << evenSum;

    cout << "\nThe sum of the odd numbers in the array is " << oddSum;

    return 0;
}

/* Sum of even numbers and sum of odd numbers
Arun and Kalai were playing a puzzle game with a given set of numbers. They need to find the odd and even numbers and find the sum of the odd numbers and the sum of the even numbers. Write a program to help them to solve the puzzle game and to win the mobile phone.
Input Format:

Input consists of n+1 integers. 

The first integer corresponds to ‘n’, the size of the array. 

The next ‘n’ integers correspond to the elements in the array. 

Assume that the maximum value of n is 15.

Output Format:

Refer to sample output for details.

Sample Input:

5

2

3

6

8

-1

Sample Output:

The sum of the even numbers in the array is 16

The sum of the odd numbers in the array is 2 */