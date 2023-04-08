#include<iostream>
using namespace std;
//constant function is such a function which cannot change the value of its object.
class Demo
{
public:
  int a,b;
  const int c;
  const int d;
    Demo(): c(11), d(21)
  {
    a=0;
    b=0;
  }
  Demo(int i, int j, int k, int l):c(k),d(l)
  {
    a=i;
    b=j;
  }
  void fun()
  {
    a++;//A
    b++;//A
  //  c++;//NA
  //  d++;//NA
  }
  void gun() const
  {
  //  a++;//NA
  //  b++//NA
  //  c++;//NA
  //  d++;//NA
    }
};

int main()
{
  Demo obj1(11,21,51,101);
  const Demo obj2{11,21,51,101};

  obj1.fun();
  obj1.gun();

  obj2.fun();
  obj2.gun();

  return 0;
}
