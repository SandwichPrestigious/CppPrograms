using namespace std;
#include<iostream>
//Application for Generic programming
template<class T>
T Addition(T i, T j)
{
    T Result;
    Result=i+j;
    return Result;
}
int main()
{
    int a;
    float f;
    double d;

    a= Addition(10,11);
    cout<<a<<"\n";

    f =Addition(10.7f, 89.5f);
    cout<<f<<"\n";

    d =Addition(10.8,70.8);
    cout<<d<<"\n";
    
    return 0;
}