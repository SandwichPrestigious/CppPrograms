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
class Hello//hello is inherited from class demo
{
public:
  int x,y;//the characteristics of the class

  Hello()
  {
    x=51;
    y=101;
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
class PPA:public Hello , public Demo//PPA is inherited from class hello
{
public:
  int i,j;//the characteristics of the class

  PPA()
  {
    i=111;
    j=121;
    cout<<"Inside PPA constructor"<<"\n";
  }
  ~PPA()
  {
    cout<<"Inside PPA destructor"<<"\n";
  }
  void sun()
  {
    cout<<"Inside sun of hello"<<"\n";
  }
};

int main()
{
  cout<<"Inside main"<<"\n";

  cout<<"Size of Demo:"<<sizeof(Demo)<<"\n";
  cout<<"Size of Hello:"<<sizeof(Hello)<<"\n";
  cout<<"Size of PPA:"<<sizeof(PPA)<<"\n";

  PPA pobj;//static object
//here hobj means hello's object
  pobj.fun();
  pobj.gun();
  pobj.sun();

  cout<<pobj.a<<"\n";
  cout<<pobj.b<<"\n";
  cout<<pobj.x<<"\n";
  cout<<pobj.y<<"\n";
  cout<<pobj.i<<"\n";
  cout<<pobj.j<<"\n";

  cout<<"End of main"<<"\n";


return 0;
}
