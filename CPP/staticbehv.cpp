#include<iostream>
using namespace std;

class Demo
{
  public:
    int a, b; //non static characteristocs
    static int x,y;//static characteristocs

    Demo()//default constructor
    {
      //intiliazation of non static characteristocs
      a=0;
      b=0;
    };

    void fun()//non static behaviour //void fun(Demo*this)
    {
      cout<<"Inside non static function fun"<<"\n";
      cout<<"Value of a:"<<this->a<<"\n";
      cout<<"Value of b:"<<this->b<<"\n";
      cout<<"Value of x:"<<x<<"\n";
      cout<<"Value of y:"<<y<<"\n";
    }

    static void gun()//static behaviour// void gun()
    {
      cout<<"Inside static function gun"<<"\n";
      cout<<"Value of x:"<<x< <"\n";
      cout<<"Value of y:"<<y<<"\n";

    }

};
//intiliazation of static characteristocs
int Demo ::x=10;
int Demo ::y= 20;

int main()
{
  Demo::gun();
  Demo obj;

  obj.fun();//fun(&obj)this is the this pointer
  obj.gun();//avoud this

  return 0;
}
