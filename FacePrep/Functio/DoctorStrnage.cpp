#include <iostream>

using namespace std;

int main()

{

    int m, n, req;

    cin >> m;

    cin >> n;

    cin >> req;

    if (m * n * req <= 50)

    {

        cout << "Doctor, you can proceed with your experiment.";
    }

    else

    {

        cout << "Sorry Doctor! You need more bacteria.";
    }

    return 0;
}
/* 
Dr.Strange needs some help.Dr.Strange has an experimental laboratory in a mysterious enclave.He is conducting an experiment to strange genes which will make him the most powerful sorcerer in the existence.He needs to create particular amount of bacteria.The bacteria multiplies exponentially.If he lets m bacteria to multiply n exponential times, he should check whether he will get the required amount of bacteria.Input consists of three inputs.The no.of bacteria, m.The number in which it gets multiplied, n.The required number, req. */