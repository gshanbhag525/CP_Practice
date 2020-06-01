#include <iostream>
using namespace std;

//To find the trailing zeros in n factorial
int main()
{
    int pow = 5;
    int n = 0, res = 0;
    // n <= 10^9
    cout << "Enter a no.\n";
    cin >> n;
    while ((n / pow) > 0)
    {
        res += n / pow;
        pow *= 5;
    }
    cout << "No. of trailing zeros in" << n << " factorial are " << endl
         << res << endl;
    return 0;
}