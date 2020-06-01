#include <iostream>
#include <vector>
using namespace ::std;

long long MaxPairwiseProduct(const vector<long long> &numbers)
{
    long long result = 0;
    int n = numbers.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (((long long)numbers[i]) * numbers[j] > result)
            {
                result = numbers[i] * numbers[j];
            }
        }
    }
    return result;
}

long long MaxPairwiseProductFast(const vector<long long> &numbers)
{
    int n = numbers.size();
    int max_index1 = -1;

    for (int i = 0; i < n; ++i)
        if ((max_index1 == -1) || (numbers[i] > numbers[max_index1]))
            max_index1 = i;

    int max_index2 = -1;
    for (int j = 0; j < n; ++j)
        if ((j != max_index1) && ((max_index2 == -1) || (numbers[j] > numbers[max_index2])))
            max_index2 = j;

    return ((long long)(numbers[max_index1])) * numbers[max_index2];
}

int main()
{
    int n;
    cin >> n;
    vector<long long> numbers(n);
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    long long result = MaxPairwiseProductFast(numbers);
    // long long result = MaxPairwiseProductFast(vector<int>(100000, 0));
    cout << result << endl;
    return 0;
}
