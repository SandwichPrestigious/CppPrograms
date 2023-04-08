#include<iostream>
using namespace std;

int Addition(int no1, int no2)
{
    int Ans=0;
    Ans= no1+no2;
    return Ans;
}

int main()
{
    int a=10, b=20;
    int ret= 0;

    ret= Addition(a,b);

    cout<<"Addition is:"<<ret<<"\n";


    return 0;
}

/*
1.Memory for local variables
2.Memory for input arguments
3.Address of next instruction
4.Value of old EBP

*/