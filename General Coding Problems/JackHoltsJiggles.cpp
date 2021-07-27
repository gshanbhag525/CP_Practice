#include <iostream>
using namespace std;
// Currency enumeration
// 1 Jack = 13.5 inr
// 1 Holt = 0.5 inr
// 17 jiggles = 0.5 inr

int main()
{
    float inr = 0.0;
    int jacks = 0, holts = 0, jiggles = 0, cnt_jacks = 0, cnt_jiggles = 0;
    cnt_holts = 0;
    cin >> inr;
    if (inr < 14.0)
    {
        cj = inr * 2;
        jiggles = cj * 17;
        cout << -1 << " " << -1 << " " << jiggles << endl;
    }
    else if (inr >= 14.0)
    {
        while (inr >= 0.5 && inr%13.5!=0)
        {
            inr/13.5
        }
    }

    // cout << jacks << " " << holts << " " << jiggles << " " << endl;
    return 0;
}