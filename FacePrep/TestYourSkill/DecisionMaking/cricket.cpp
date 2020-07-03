#include<iostream>
using namespace std;
float round(float var) 
{ 
    // we use array of chars to store number 
    // as a string. 
    char str[40];  
  
    // Print in string the value of var  
    // with two decimal point 
    sprintf(str, "%.1f", var); 
  
    // scan string value in var  
    sscanf(str, "%f", &var);  
  
    return var;  
} 
  
int main()
{
  int tb, tr, nb, nr;
  int to;
  float toF, currRR, totalRR;
  float toF2, toF1;
  cin>>tb >> tr >> nr >> nb;
  
  to = tb / 6;
  
  toF1 = nb / 6 ;
  toF2 = (nb % 6);
  toF = toF1 + toF2 * 0.1;

  currRR = nr / toF;
  
  // toF1 = tb / 6 ;
  // toF2 = (tb % 6);
  totalRR = tr / ( to * 1.0 );
  
  cout<<to<<endl<<toF<<endl<<round(currRR)<<endl<<round(totalRR)<<endl;
 // float reqRR = (tr - nr) / (to - toF);
  if(currRR >= totalRR)
    cout<<"Eligible to Win";
  else
        cout<<"Not Eligible to Win";
  return 0;
}


/*
Cricket
Tom is crazy about cricket. He was watching India vs. Australia World cup final match. Australia won the toss and elected to bat first. They finished batting with a score of X. Next, India started to bat and scored Y runs in N number of balls. As Tom is very crazy, he wants to calculate the run rate and check whether there is a probability for India to win or not. Help him calculate the run-rate and check the probability.
INPUT FORMAT & OUTPUT FORMAT:

Input consists of 4 integers. First input corresponds to the total number of balls. Second input corresponds to the total number of runs. Third input corresponds to the number of runs scored. Fourth input corresponds to the number of balls bowled. First output corresponds to the total number of overs. Second output corresponds to the total number of overs finished. Third output corresponds to the current run rate. Fourth output corresponds to total run rate.

Overs: 50 Overs finished: 7.3 Current Run rate: 10.7 Total Run rate: 7.5 Eligible to Win

SAMPLE INPUT:

300

375

78

45

SAMPLE OUTPUT:

50

7.3

10.7

7.5

Eligible to Win

*/