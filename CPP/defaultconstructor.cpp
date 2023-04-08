#include<iostream>
using namespace std;

class Demo
{
    public: 
        int a;
        int b;
        Demo()
        {
            a= 10;
            b=20;
        }
        Demo(int i)
        {
            a=i;
            b=20;
        }
        Demo(int i, int j)
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

    return 0;
}