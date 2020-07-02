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