#include<iostream>
using namespace std;

class base
{
public:
  int a;
private:
  int b;
protected:
  int c;

public:
  base()
  {
    a=10;
    b=20;
    c=30;
  }
};

class Derived:public base
{
public:
  int x;
  void Display()
  {
    cout<<a<<"\n";//allowed
    //cout<<b<<"\n";//not allowed
    cout<<c<<"\n";//allowed

  }
};

int main()
{
  Derived dobj;
  cout<<dobj.a<<"\n";//alloweD
  //cout<<dobj.b<<"\n";//Not alloweD
  //cout<<dobj.c<<"\n";//allowed
  cout<<dobj.x<<"\n";

  dobj.Display();

  return 0;
}
