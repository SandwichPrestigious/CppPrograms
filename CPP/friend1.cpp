#include<iostream>
using namespace std;
class Hello
{
public:
  void gun();
};

class Marvellous
{
public:
  void sun();
  void run();
};

class Demo
{
public:
  int a;
private:
  int b;
protected:
  int c;

public:
  Demo(int i, int j, int k)
  {
    a=i;
    b=j;
    c=k;
  }
  friend void fun();
  friend void  Hello::gun();
  friend class Marvellous;
};
void fun()
{
  Demo obj(11,21,51);
  cout<<"Value of a from fun:"<<obj.a<<"\n";
  cout<<"Value of b from fun:"<<obj.b<<"\n";
  cout<<"Value of c from fun:"<<obj.c<<"\n";

}
    void Hello::gun()
  {
    Demo obj(11,21,51);
    cout<<"Value of a from gun:"<<obj.a<<"\n";
    cout<<"Value of b from gun:"<<obj.b<<"\n";
    cout<<"Value of c from gun:"<<obj.c<<"\n";

}
  void Marvellous::sun()
{
  Demo obj(11,21,51);
  cout<<"Value of a from sun:"<<obj.a<<"\n";
  cout<<"Value of b from sun:"<<obj.b<<"\n";
  cout<<"Value of c from sun:"<<obj.c<<"\n";

}
void Marvellous::run()
{
  Demo obj(11,21,51);
  cout<<"Value of a from run:"<<obj.a<<"\n";
  cout<<"Value of b from run:"<<obj.b<<"\n";
  cout<<"Value of c from run:"<<obj.c<<"\n";

}

/*void gun()
{
  Demo obj(11,21,51);
  cout<<"Value of a:"<<obj.a<<"\n";
  cout<<"Value of b:"<<obj.b<<"\n";
  cout<<"Value of c:"<<obj.c<<"\n";

}
*/
int main()
{
  fun();
  //gun();
  Hello hobj;
  hobj.gun();

  Marvellous mobj;
  mobj.sun();
  mobj.run();

  return 0;
}
