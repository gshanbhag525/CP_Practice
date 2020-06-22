#include <iostream>

using namespace std;

int main()
{

    int a, b, best = 0;
    cout << "Enter a, b";
    cin >> a >> b;
    for (int i = 1; i < a + b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            best = i;
            cout << best << endl;
        }
    }
    cout << "Greatest common divisor is " << best << endl;

    return 0;
}
