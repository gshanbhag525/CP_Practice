#include <iostream>
using namespace std;
main()
{
    int n, c = 0;
    cin >> n;
    cout << n << endl;
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
            cout << n << endl;
            c++;
        }
        else if (n % 2 != 0)
        {
            n = 3 * n + 1;
            cout << n << endl;
            c++;
        }
        else if (n == 1)
            break;
    }
    cout << c;
}