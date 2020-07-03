#include <iostream>
using namespace std;
main()
{
    int n, a;
    cin >> n;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << n;
        cout << endl;
        n += 1;
    }
    n -= 1;
    for (int i = n; i >= 1; i--)
    {
        for (int j = n; j >= 1; j--)
        {
            cout << n;
        }
        cout << endl;
        n -= 1;
    }
}
