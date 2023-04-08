//here single level inheritance is used
#include<iostream>
using namespace std;
//parent class also known as base class
class Demo
{
  public:
    int a,b;//these are the characteristics of the class

    Demo()
    {
      a=11;
      b=21;
      cout<<"Inside Demo constructor"<<"\n";
    }
    ~Demo()
    {
      cout<<"Inside demo destructor"<<"\n";
    }
    void fun()//method of the class
    {
      cout<<"Inside fun of demo"<<"\n";
    }

};
//child class also known as derived class
class Hello:public Demo //hello is inherited from class demo
{
public:
  int x,y;//the characteristics of the class

  Hello()
  {
    x=51;
    y=71;
    cout<<"Inside hello constructor"<<"\n";
  }
  ~Hello()
  {
    cout<<"Inside Hello destructor"<<"\n";
  }
  void gun()
  {
    cout<<"Inside gun of hello"<<"\n";
  }
};

int main()
{
  Hello hobj;//static object
//here hobj means hello's object
  hobj.fun();
  hobj.gun();

  cout<<hobj.a<<"\n";
  cout<<hobj.b<<"\n";
  cout<<hobj.x<<"\n";
  cout<<hobj.y<<"\n";

return 0;
}
