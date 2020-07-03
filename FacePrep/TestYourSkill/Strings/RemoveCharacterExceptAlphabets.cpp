#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;
int main()
{
    char str[50];
    cin >> str;
    int s = strlen(str);
    for (int i = 0, j = 0; i < s; i++)
    {
        if (isalpha(str[i]))
        {
            cout << str[i];
        }
    }
    cout << "\0";
    return 0;
}

/*

Remove character except alphabets
In a blind organization, they were playing the typing a keyword game and they want to correct the form of the word. So help them to by writing a program to remove all special symbols and print the characters of a string.
Input & output Format:

Input consists of a string. Assume the maximum length of the string is 200. The characters in the string can contain both uppercase, lowercase, and symbols.

Sample Input:

pro$#&gra7m

Sample Output:

program


*/