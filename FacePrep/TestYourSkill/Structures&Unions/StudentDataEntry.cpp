#include <iostream>
#include <cstring>
using namespace std;
struct student
{
    char name[50];
    int roll;
    float marks;
} s1;
main()
{
    int i = 1;
    gets(s1.name);
    cin >> s1.roll;
    cin >> s1.marks;
    cout << endl
         << "Student Details" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Roll: " << s1.roll << endl;
    cout << "Marks: " << s1.marks << endl;
}


/* 
Student data entry
It is the first day in school. The kids need to enroll their data in system. Teacher calls one by one to enter the data. They need to enter their data and need to check the display their details.
[Hint : use structure to store the details of student] */