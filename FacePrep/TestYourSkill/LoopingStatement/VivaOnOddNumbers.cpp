#include <iostream>
using namespace std;
main()
{
    int a[10], cnt = 0;
    float score = 0.0f;
    for (int i = 0; i < 10; i++)
        cin >> a[i];

    for (int i = 0; i < 10; i++)
    {
        if (a[i] < 0)
        {
            if (score == 0.0f)
                continue;
            else
                score -= 1.0;
            break;
        }
        else if (a[i] > 0)
        {
            if (a[i] % 2 != 0)
            {
                score += 1;
                cnt++;
            }
            else if (a[i] % 2 == 0)
                score -= 0.5f;
            else if (a[i] == 0)
                continue;
            if (cnt == 3)
                break;
        }
    }
    cout << score * 1.0 << endl;
}