#include <iostream>

using namespace std;

int main()
    
{

    char str[200];

    cin.getline(str, 200);

    int i = 0;

    while (str[i] != '\0')

    {

        if (str[i] == 't')

        {

            i++;

            if (str[i] == 'h')

            {

                i++;

                if (str[i] == 'e')

                {

                    i++;

                    if (str[i] == ' ')

                        i++;
                }
            }

            else

            {
                --i;

                cout << str[i];

                i++;

                cout << str[i];

                i++;
            }
        }

        else

        {
            cout << str[i];

            i++;
        }
    }
}

/* Remove

In a certain area, there was a camp of polio drops team. They need to search for every baby in a particular area. They want to find the baby and take out the baby for polio drops. Help them to find the baby to avoid polio attacks. (remove the occurrence of the word "the" from the entered string).
Input Format:

The input is a string.

Text that is bold represents the input.

Output Format:

The output is a string.

Sample Input:

remove the occurrence of the word from entered string

Sample Output:

remove occurrence of word from entered string
a */
