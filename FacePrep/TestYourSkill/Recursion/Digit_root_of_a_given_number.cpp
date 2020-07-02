#include <iostream>
using namespace std;
int sumdigit(int n)
{
    int sum = 0, num, cnt = 0;
    num = n;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
        ++cnt;
    }
    if (cnt == 1)
        return (sum);
    else
        sumdigit(sum);
}
int main()
{
    int n;
    cin >> n;
    int sum = sumdigit(n);
    cout << sum;
    return 0;
}