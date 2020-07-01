#include <iostream>
using namespace std;
int main()
{
    int fa, fd, fs, aa, ad, as, sa, sd, ss;
    cin >> fa >> fd >> fs >> sa >> sd >> ss >> aa >> ad >> as;
    fd = fd * 0.01 * fa;
    ad = ad * 0.01 * aa;
    sd = sd * 0.01 * sa;
    int faa = fa - fd + fs;
    int saa = sa - sd + ss;
    int aaa = aa - ad + as;
    cout << "In Flipkart Rs." << faa << endl;
    cout << "In Snapdeal Rs." << saa << endl;
    cout << "In Amazon Rs." << aaa << endl;
    if (faa < saa && faa < aaa)
        cout << "He will prefer Flipkart" << endl;

    if (aaa < saa && aaa < faa)
        cout << "He will prefer Amazon" << endl;

    if (saa < aaa && saa < faa)
        cout << "He will prefer Snapdeal" << endl;
    if (faa == saa && aaa > faa)
        cout << "He will prefer Flipkart" << endl;

    return 0;
}
/*
Car mileage
Nanu bought a new car and for the first time, he wants to go to a temple. Without checking how much petrol is available in the car, he started traveling. After reaching a certain distance, he remembered that he didn't check the petrol level of his car. Then he checks the petrol level and calculates how much distance he must travel to reach the destination. Find whether he can reach the destination with the available petrol. Mileage is also known. Display “Can reach” or “Cannot reach” based on the situation.
INPUT & OUTPUT FORMAT:

Input consists of 1 float and 2 integers values.

First input corresponds to the mileage which is of float datatype.

Second input corresponds to liters of petrol available.

Third input corresponds to the distance to be travelled.

The output consists of one string.

SAMPLE INPUT:

11

6

67

SAMPLE OUTPUT:

Cannot reach


*/