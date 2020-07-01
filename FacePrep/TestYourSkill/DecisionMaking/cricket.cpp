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