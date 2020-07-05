#include <iostream>

using namespace std;

int main()

{

    int n;

    cout << "Enter the number of elements in the array"
         << "\n";

    cin >> n;

    int arr[n];

    cout << "Enter the elements in the array"
         << "\n";

    for (int i = 0; i < n; i++)

    {

        cin >> arr[i];
    }

    int i;

    int odd = 0, even = 0;

    for (i = 0; i < n; i++)

    {

        if (arr[i] % 2 == 1)

            odd++;

        if (arr[i] % 2 == 0)

            even++;
    }

    if (odd == n)

        cout << "The array is Odd";

    else if (even == n)

        cout << "The array is Even";

    else

        cout << "The array is Mixed";

    return 0;
}

/* Functions – Array type
Write a program to find the type of array using functions. An array is said to be “Even” if all the elements in the array are even. An array is said to be “Odd” if all the elements in the array are odd. An array is said to be “Mixed” if it contains some odd elements and some even elements. Refer function specifications for the function details. The first argument corresponds to the number of elements in the array. The second argument corresponds to the pointer to an array. The return value of the function should be 1 if the array is Even. The return value of the function should be 2 if the array is Odd. The return value of the function should be 3 if the array is Mixed.
Input & Output Format:

Input consists of n+1 integers where n corresponds to the number of elements in the array.

The first integer corresponds to n and the next n integers correspond to the elements in the array.

Assume that the maximum number of elements in the array is 20.

Refer to the sample input and output for formatting specifications.

Sample Input & Output:

Enter the number of elements in the array

5

Enter the elements in the array

2

4

1

3

5

The array is Mixed */