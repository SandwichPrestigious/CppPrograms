#include<iostream>
using namespace std;

class Demo
{
    public:
        int a, b;
        Demo(int i =10, int j=20)
        {
            a=i;
            b=j;
        }
        friend Demo operator + (Demo op1, Demo op2);
        friend Demo operator - (Demo op1, Demo op2);
        friend Demo operator * (Demo op1, Demo op2);
        friend Demo operator / (Demo op1, Demo op2);
};

Demo operator + (Demo op1, Demo op2)
{
    cout<<"Inside Operator"<<"\n";
    return Demo(op1.a+op2.a, op1.b+op2.b);
}

Demo operator - (Demo op1, Demo op2)
{
    cout<<"Inside Operator"<<"\n";
    return Demo(op1.a-op2.a, op1.b-op2.b);
}

Demo operator * (Demo op1, Demo op2)
{
    cout<<"Inside Operator"<<"\n";
    return Demo(op1.a*op2.a, op1.b*op2.b);
}
Demo operator / (Demo op1, Demo op2)
{
    cout<<"Inside Operator"<<"\n";
    return Demo(op1.a/op2.a, op1.b/op2.b);
}

int main()
{   
    Demo obj1(11,21);
    Demo obj2(51,101);
    Demo obj(0,0);

    obj=obj1+obj2; //+(obj1,obj2)


    cout<<obj.a<<"\n";
    cout<<obj.b<<"\n";

    return 0;
}