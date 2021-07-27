// { Driver Code Starts
#include <iostream>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
} // } Driver Code Ends

int convertFive(int n)
{
    int dec_place = 1;
    int res = 0, num;
    num = n;
    if (n == 0)
        return 5 * dec_place;

    while (n > 0)
    {
        if (n % 10 == 0)
            res += 5 * dec_place;
        n /= 10;
        dec_place *= 10;
    }
    return (res + num);
}

/* Replace all 0's with 5 
You are given an integer N. You need to convert all zeroes of N to 5.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains a single integer N denoting the number.

Output:
For each test case, there will be a new line containing an integer where all zero's are converted to 5.

Your Task:
Your task is to complete the function convertFive() which takes an integer N as an argument and replaces all zeros in the number N with 5. Your function should return the converted number.

Expected Time Complexity: O(K) where K is the number of digits in N
Expected Auxiliary Space: O(1)

Constraints:
1 <= T <= 100
1 <= n <= 10000

Example:
Sample Input:
2
1004
121

Sample Output:
1554
121
 */