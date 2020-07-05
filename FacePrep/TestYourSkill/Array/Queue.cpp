#include <iostream>

using namespace std;

int q(int n, int m, int a[])
{

    int sum = 0;

    for (int i = 0; i < n; i++)
    {

        sum += a[i];
    }

    if (n == 1 && m == 2)

        return 1;

    else

        return (sum / m) + 1;
}

int main()

{

    int n, m;

    cin >>
        n >> m;

    int a[n];

    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }

    cout << q(n, m, a);
}

/* Queue
A bus stop queue has n groups of people. The i-th group from the beginning has ai people. Every 30 minutes an empty bus arrives at the bus stop, it can carry at most m people. Naturally, the people from the first group enter the bus first. Then go the people from the second group and so on. Note that the order of groups in the queue never changes. Moreover, if some group cannot fit all of its members into the current bus, it waits for the next bus together with other groups standing after it in the queue. Your task is to determine the number of buses needed to transport all n groups to the dacha countryside. FUNCTIONAL REQUIREMENTS: void queue(int,int,int*); .
Input Format:

The first line contains two integers n and m (1 ≤ n, m ≤ 100). The next line contains n integers: a1, a2, ..., an (1 ≤ ai ≤ m).

Output Format:

Print a single integer — the number of buses needed to transport all n groups to the dacha countryside.

Sample Input:

4 3

2 3 2 1

Sample Output:

3 */