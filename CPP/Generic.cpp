using namespace std;
#include<iostream>
//Application for Specific programming
int AdditionI(int i, int j)
{
    int Result;
    Result=i+j;
    return Result;
}

float AdditionF(float i, float j)
{
    float Result;
    Result=i+j;
    return Result;
}

double AdditionD(double i, double j)
{
    double Result;
    Result=i+j;
    return Result;
}

int main()
{
    int a;
    float f;
    double d;

    a= AdditionI(10,11);
    cout<<a<<"\n";

    f =AdditionF(10.7f, 89.5f);
    cout<<f<<"\n";

    d =AdditionD(10.8,70.8);
    cout<<d<<"\n";
    
    return 0;
}