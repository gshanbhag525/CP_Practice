#include <iostream>
using namespace std;
int main()
{
    int age;
    float showtime;
    cin >> age >> showtime;

    if (age > 13)
    {
        if ( showtime == 13.30f)
            cout << "$" << "5.00"<<endl;
        else if (showtime == 18.00f || showtime == 22.00f || showtime == 10.15f )
            cout << "$" << "8.00"<<endl;
    }
    else if (age <= 13)
    {
        // Child area
        if ( showtime == 13.30f)
            cout << "$" << "2.00"<<endl;
        else if (showtime == 18.00f || showtime == 22.00f || showtime == 10.15f )
            cout << "$" << "4.00"<<endl;
    }
    return 0;
}

/*
Age Detector
Ask a user for his/her birth year encoded as two digits (like "62") and for the current year, also encoded as two digits (like "99"). Write a program to find the users current age in years.
INPUT FORMAT:

Input consists of 2 integers.

The first integer corresponds to the last 2 digits of the birth year.

The second integer corresponds to the last 2 digits of the current year.

OUTPUT FORMAT:

Print the user's current age.

Refer below sample output for formatting.

SAMPLE INPUT:

62

00

SAMPLE OUTPUT:

38



*/