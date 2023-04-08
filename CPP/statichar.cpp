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
};
//intiliazation of static characteristocs
int Demo :: x=10;
int Demo ::y= 20;
//()::)is

int main()
{
  cout<<"value of x:"<<Demo::x<<"\n";
  cout<<"value of y:"<<Demo::y<<"\n";

  Demo obj1;
  Demo obj2;

  cout<<"value of a from obj1:"<<obj1.a<<"\n";
  cout<<"value of a from obj1:"<<obj2.a<<"\n";

  obj1.a++;
  cout<<"After increment\n";
  cout<<"value of a from obj1:"<<obj1.a<<"\n";
  cout<<"value of a from obj1:"<<obj2.a<<"\n";

  cout<<"value of x from obj1:"<<obj1.x<<"\n";
  cout<<"value of x from obj2:"<<obj2.x<<"\n";

  cout<<"Size of demo class object is:"<<sizeof(obj1)<<"\n";//8

  return 0;
}
