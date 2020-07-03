#include<iostream>
using namespace std;
main()
{
  int fd, fc, sd, sc;
  cin>>fd>>fc>>sd>>sc;
  int sumd, sumc;
  sumc = sc+fc;
  sumd = sd + fd;
  if(sumc>= 100)
  {  sumc -= 100;
  	sumd += 1;
  }
  cout<<sumd<<"\n"<<sumc;

}


/*
Dollars & Cents
Write a C++ program to add two dollars and cents.
INPUT & OUTPUT FORMAT:

Input consists of 4 integers. First two inputs correspond to the value of the first dollar and cent. Next two inputs correspond to the value of the second dollar and cent. Output should print the sum of dollar and cent.

SAMPLE INPUT:

30

10

140

99

SAMPLE OUTPUT:

171

9


*/