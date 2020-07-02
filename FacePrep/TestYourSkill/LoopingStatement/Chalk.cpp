#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int n;
    float a, b;
    cin >> n;
    a = 1 / (sqrt(n));
    b = n / (1 - a);
    char str[40];
    sprintf(str, "%.f", b);
    sscanf(str, "%f", &b);
    cout << b;
}


/*

Chalk
Raj's teacher Anu uses chalk to write on the board. When the chalk reduces to 1/squareroot(n) of its original size, she keeps the chalk aside as it gets too small. She joins all the small pieces of the chalk and makes another chalk of the same size and uses it. If she uses one chalk each day, in how many days will she use the given n number of chalks?
INPUT & OUTPUT FORMAT:

Input consists of 1 integer which corresponds to the number of chalks given. Output corresponds to the number of days in which the given number of chalks will be used.

SAMPLE INPUT:

16

SAMPLE OUTPUT:

21

*/