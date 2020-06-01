#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n\n";
    cin >> n;
    //First row
    cout << "*";
    for (int i = 0; i < ((n - 3) / 2); i++)
        cout << " ";
    for (int i = 0; i < ((n + 1) / 2); i++)
        cout << "*";
    cout << endl;
    //Second one - 2 rows
    for (int i = 0; i < 2; i++)
    {
        cout << "*";
        for (int i = 0; i < ((n - 3) / 2); i++)
            cout << " ";
        cout << "*";
        cout << endl;
    }
    //Third row straight line
    for (int i = 0; i < n; i++)
    {
        cout << "*";
    }
    cout << endl;
    //Fourth one- 2 rows
    for (int i = 0; i < 2; i++)
    {

        cout << "   ";
        cout << "*";
        for (int i = 0; i < ((n - 3) / 2); i++)
            cout << " ";
        cout << "*";
        cout << endl;
    }
    // Last one
    for (int i = 0; i < (n + 1) / 2; i++)
    {
        cout << "*";
    }
    for (int i = 0; i < ((n - 3) / 2); i++)
        cout << " ";
    cout << "*";
    cout << endl;
    return 0;
}