#include <stdio.h>

int fib(int);

int main()

{

    int n, result;

    scanf("%d", &n);

    result = fib(n - 1);

    printf("The term %d in the fibonacci series is %d\n", n, result);

    return 0;
}

/* function for recursive fibonocci call */

int fib(int n)

{

    if (n == 0)

    {

        return 0;
    }

    else if (n == 1)

    {

        return 1;
    }

    else

    {

        return (fib(n - 1) + fib(n - 2));
    }
}

/* Fibonacci Series
Write a program to find the nth term in the Fibonacci series using recursion. Note that the first 2 terms in the Fibonacci Series are 0 and 1.
INPUT & OUTPUT FORMAT:

Input consists of an integer.

Refer sample input and output for formatting specifications.

All text in bold corresponds to the input and the rest corresponds to output.

SAMPLE INPUT & OUTPUT:

5

The term 5 in the fibonacci series is 3s */