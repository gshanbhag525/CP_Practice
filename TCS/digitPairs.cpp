#include <iostream>
using namespace std;

int BitScore(int n)
{
    int x, y, z, Max, Min, score;

    x = n % 10;
    n /= 10;
    y = n % 10;
    n /= 10;
    z = n % 10;
    n /= 10;

    Max = (x > y) ? x : y;
    Max = (z > Max) ? z : Max;
    Min = (x < y) ? x : y;
    Min = (z < Min) ? z : Min;

    score = Max * 11 + Min * 7;

    score = score % 100;
    return score;
}

int SrcPairs(int ArrScore[], int N)
{
    int SignDigit[10], i, p = 0, msb;

    for (i = 0; i < 10; i++)
    {
        SignDigit[i] = 0;
    }

    //for even pairs
    for (i = 0; i < N; i = i + 2)
    {
        msb = ArrScore[i] / 10;
        for (int j = i + 2; j < N; j = j + 2)
        {
            if (msb == ArrScore[j] / 10)
            {
                if (SignDigit[msb] < 2)
                {
                    SignDigit[msb]++;
                }
            }
        }
    }

    //for odd pairs
    for (i = 1; i < N; i = i + 2)
    {
        msb = ArrScore[i] / 10;
        for (int j = i + 2; j < N; j = j + 2)
        {
            if (msb == ArrScore[j] / 10)
            {
                if (SignDigit[msb] < 2)
                {
                    SignDigit[msb]++;
                }
            }
        }
    }

    //Result
    for (i = 0; i < 10; i = i++)
    {
        p = p + SignDigit[i];
    }

    return p;
}

int main()
{
    int N, i, pairs;
    int input_arr[501], ArrScore[501];

    cin >> N;

    for (i = 0; i < N; i = i++)
    {
        cin >> input_arr[i];
    }

    for (i = 0; i < N; i = i++)
    {
        ArrScore[i] = BitScore(input_arr[i]);
    }

    pairs = SrcPairs(ArrScore, N);
    cout << pairs;

    return 0;
}