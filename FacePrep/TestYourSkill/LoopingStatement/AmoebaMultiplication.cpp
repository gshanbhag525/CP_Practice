#include <iostream>
using namespace std;
int main()
{
    int count, size, t1 = 0, t2 = 1, next;
    cin >> count;
    if (count == 1)
        cout << t1;
    else if (count == 2)
        cout << t2;
    else if (count > 2)
    {
        for (int i = 3; i <= count; i++)
        {
            next = t1 + t2;
            t1 = t2;
            t2 = next;
        }
        cout << t2;
    }
    return 0;
}