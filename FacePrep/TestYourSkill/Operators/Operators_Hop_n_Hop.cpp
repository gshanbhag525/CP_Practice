#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x1 = 3, y1 = 4;
    int x2, y2, dx, dy, n, d;
    cin >> x2 >> y2;
    dx = x2 - x1;
    dy = y2 - y1;
    d = dx * dx + dy * dy;
    n = sqrt(d);
    cout << n;
}





/*

Question:
Hop n Hop
Big Bunny lives in a colony. He is the only bunny in his colony who is not able to hop. On his 5th birthday, his father bunny gifted him a pogo stick as he could not jump like the other bunnies. He is so excited to play with the pogo stick. The pogo stick hops one unit per jump. He wanders around his house jumping with pogo sticks. He wants to show the pogo stick to his friends and decides to go using pogo sticks. Write a program to find the number of hops needed to reach his friends' house. Assume that Big Bunny's house is in the location (3,4).
INPUT FORMAT:

Input consists of two integers x,y.

The x and y correspond to x and y coordinates of his friends' house.

OUTPUT FORMAT:

The output is an integer. It corresponds to the number of hops needs to reach his friends' house.

SAMPLE INPUT: 

5 

10 

SAMPLE OUTPUT: 

6

*/