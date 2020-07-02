#include <iostream>
using namespace std;
int main()
{
    int a, b, c, t;
    int code;
    cin >> a >> b >> c;
    int p;
    if (a > b && a > c)
    {
        if (b > c)
            p = b;
        else
            p = c;
    }
    else if (b > a && b > c)
    {
        if (a > c)
            p = a;
        else
            p = c;
    }
    else
    {
        if (b > a)
            p = b;
        else
            p = a;
    }
    cout << "The treasure is in box which has number " << p << endl;

    for (int i = 1; i <= 5; i++)
    {
        if (a % i == 0 && b % i == 0 && c % i == 0)
            t = i;
    }
    cout << "The code to open the box is " << t << endl;

    return 0;
}

/*
Treasure Finder
Lucy and Tina are close friends. They both are studying in the same school. Now they are on their summer vacation. As they are bored, they ask their parents to take them to an exhibition. There Lucy and Tina play a game. In this game, there are three boxes with some number written on their top. There is a treasure in one of the three boxes and the treasure is present in the box with the second largest number on its top. Also, to open the box, they need to decode the correct code of this box. The clue given to them to find the code is that it is the largest number which divides all the three given numbers. So, now help Lucy and Tina to decode the code.
INPUT FORMAT:

Input consists of three integers. First input corresponds to the number of the first box. Second input corresponds to the number of the second box. Third input corresponds to the number of the third box.

SAMPLE INPUT:

2

4

6

SAMPLE OUTPUT:

The treasure is in the box which has number 4.

The code to open the box is 2.
*/