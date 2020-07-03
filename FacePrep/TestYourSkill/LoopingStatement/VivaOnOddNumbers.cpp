#include <iostream>
using namespace std;
main()
{
    int a[10], cnt = 0;
    float score = 0.0f;
    for (int i = 0; i < 10; i++)
        cin >> a[i];

    for (int i = 0; i < 10; i++)
    {
        if (a[i] < 0)
        {
            if (score == 0.0f)
                continue;
            else
                score -= 1.0;
            break;
        }
        else if (a[i] > 0)
        {
            if (a[i] % 2 != 0)
            {
                score += 1;
                cnt++;
            }
            else if (a[i] % 2 == 0)
                score -= 0.5f;
            else if (a[i] == 0)
                continue;
            if (cnt == 3)
                break;
        }
    }
    cout << score * 1.0 << endl;
}

/*
Viva on odd numbers
A maths teacher asks her students to give 3 examples for positive odd numbers. When the student specifies a correct answer, his/her score is incremented by 1. When the student specifies a positive even number, his/her score is decremented by 0.5. When the student specifies a negative number, he/she will not be given any more chances to correct his or her mistake and his/her score will be decremented by 1. So a student's turn comes to an end when he/she has correctly specified 3 positive odd numbers or when the student has specified a negative number. Some students didn't know the difference between odd numbers and even numbers and they made many mistakes and so it was difficult for the teacher to maintain the scores. The teacher asks for your help. Can you please help her by writing a program to calculate the score?
INPUT & OUTPUT FORMAT:

Input consists of a list of integers.

The output consists of a single line. The score needs to be corrected to 1 decimal place.

[For this exercise, don't worry about duplicate odd numbers. Even if the students specify the same odd number thrice, it is accepted].

SAMPLE INPUT & OUTPUT 1:

1

3

5

3.0

SAMPLE INPUT & OUTPUT 2:

1

2

5

6

7

2.0


*/