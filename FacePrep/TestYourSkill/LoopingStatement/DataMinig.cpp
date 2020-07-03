#include <iostream>
using namespace std;
main()
{
    int n, sumeven, sumodd;
    cin >> n;
    while (n > 0)
    {
        int rem = n % 10;
        if (rem % 2 == 0)
            sumeven += rem;
        else
            sumodd += rem;
        n /= 10;
    }
    if (sumeven == sumodd)
        cout << "Yes";
    else
        cout << "No";
}

/*

Data mining
In the University examinations conducted during the past 5 years, the toppers registration numbers were 7126, 82417914, 7687 and 6657. Your father is an expert in data mining and he could easily infer a pattern in the toppers registration numbers. In all the registration numbers listed here, the sum of the odd digits is equal to the sum of the even digits in the number. He termed the numbers that satisfy this property as Probable Topper Numbers. Now, write a program to find whether a given number is a probable topper number or not.
INPUT & OUTPUT FORMAT:

Input consists of a single integer.

The output consists of a single line. Refer the sample output for details.

SAMPLE INPUT & OUTPUT:

143

Yes

*/