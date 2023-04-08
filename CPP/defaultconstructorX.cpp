#include<iostream>
using namespace std;

class Demo
{
    public: 
        int a;
        int b;
        //parameterized constructor with default arguments
        Demo(int i=10, int j=20)
        {
            a=i;
            b=j;
        }
};

int main()
{
    Demo obj1; //10,20
    Demo obj2(11);//11,20
    Demo obj3(11,21);//11,21

    cout<<obj1.a<<"\t"<<obj1.a<<"\n";
    cout<<obj2.a<<"\t"<<obj2.a<<"\n";
    cout<<obj3.a<<"\t"<<obj3.a<<"\n";

    cout<<obj1.b<<"\t"<<obj1.b<<"\n";
    cout<<obj2.b<<"\t"<<obj2.b<<"\n";
    cout<<obj3.b<<"\t"<<obj3.b<<"\n";



    return 0;
}