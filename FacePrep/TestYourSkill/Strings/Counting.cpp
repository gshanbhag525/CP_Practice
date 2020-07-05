#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char line[200];
    int vowels, consonants, digits, spaces, symbol;
    vowels = consonants = digits = spaces = symbol = 0;
    cin.getline(line, 200);

    for (int i = 0; line[i] != '\0'; ++i)
    {
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||

            line[i] == 'o' || line[i] == 'u' || line[i] == 'A' ||

            line[i] == 'E' || line[i] == 'I' || line[i] == 'O' ||

            line[i] == 'U')
            vowels++;

        else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
            consonants++;

        else if (line[i] >= '0' && line[i] <= '9')
            digits++;

        else if (line[i] == ' ')
            spaces++;

        else if (line[i] != '\0' || line[i] != '\n')
            symbol++;
    }

    cout << "Vowels:" << vowels << endl;
    cout << "Consonants:" << consonants << endl;
    cout << "White Spaces:" << spaces << endl;
    cout << "Digits:" << digits << endl;
    cout << "Symbols:" << symbol << endl;

    return 0;
}

/* Counting
These days kids are introduced to computers at a very early age. The kids are taught about alphabets, digits and blank spaces. The teacher asked the students to count the vowels, consonants, digits and white spaces in a string. The teacher found it a bit difficult to evaluate these tests and she knew that the 12th class students are learning C programming. So she assigned this task to them to count the vowels, consonants, digits and white spaces in a string. Can you please help them out? Write a program to count the vowels, consonants, digits, white spaces, and symbols in a string.
Input &output Format:

Input consists of a string. Assume the maximum length of the string is 200. The characters in the string can contain both uppercase and lowercase. Refer sample input and output for formatting specifications.

Sample Input:

This program is very easy 2 complete

Sample Output:

Vowels : 10

Consonants : 19

White spaces : 6

Digits : 1

Symbols : 0 */