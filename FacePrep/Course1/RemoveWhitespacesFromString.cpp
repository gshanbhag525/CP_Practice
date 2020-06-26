#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, newWord;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            newWord += str[i];
        }
    }
    cout << newWord;

    return 0;
}