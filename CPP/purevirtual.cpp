#include<iostream>
using namespace std;

class Base
{
public:
  int a, b;
//1000
  int Addition(int i, int j)//concrete function
  {
    return i+j;
  }
//2000
  virtual int Substraction(int i, int j)//concrete function
  {
    return i-j;
  }
  virtual int Multiplication(int i, int j)=0;//abstract function ie function without body
};
class Derived :public Base
{
public:
  int x,y;
//3000
  int Substraction(int i, int j)
  {
    int Ans=0;
    Ans= i-j;
    return Ans;
  }
  //4000
  int Multiplication(int i, int j)
  {
    return i*j;
  }
};

int main()
{
  //Base bobj;//Not Allowed
  Base *bp = new Derived;
  int Ret= 0;

  Ret= bp->Addition(10,11);// base addtion
  cout<<"ADDITION IS :"<<Ret<<"\n";//21

  Ret= bp->Substraction(10,11);//derived Substraction
  cout<<"ADDITION IS :"<<Ret<<"\n";//-1

  Ret= bp->Multiplication(10,11);// derived Multiplication
  cout<<"ADDITION IS :"<<Ret<<"\n";//110


  return 0;
}
