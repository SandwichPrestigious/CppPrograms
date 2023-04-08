#include<iostream>
using namespace std;

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
};

int main()
{
  Demo obj1;
  Demo obj2(11,21,51,101);

  cout<<"Value of a from obj1:"<<obj1.a<<"\n";
  cout<<"Value of b from obj1:"<<obj1.b<<"\n";
  cout<<"Value of c from obj1:"<<obj1.c<<"\n";
  cout<<"Value of d from obj1:"<<obj1.d<<"\n";

  cout<<"Value of a from obj2:"<<obj2.a<<"\n";
  cout<<"Value of b from obj2:"<<obj2.b<<"\n";
  cout<<"Value of c from obj2:"<<obj2.c<<"\n";
  cout<<"Value of d from obj2:"<<obj2.d<<"\n";

  return 0;
}
