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
