#include<iostream>
using namespace std;
class  Base
{
public:
  int a, b;

  virtual void Fun()      //1000
  {
    cout<<"Inside Fun of base"<<"\n";
  }
  virtual void Gun()     //2000
  {
    cout<<"Inside Gun of base"<<"\n";

  }
   void Sun()     //3000
    {
      cout<<"Inside Sun of base"<<"\n";

    }
};
class Derived: public Base
{
public:
  int x,y;
  void Fun()      //1000
  {
    cout<<"Inside Fun of Derived"<<"\n";
  }
   virtual void Sun()     //3000
    {
      cout<<"Inside Sun of derived"<<"\n";
    }
    virtual void Run()
    {
      cout<<"Inside Run of Derived"<<"\n";
    }

};

int main()
{
  cout<<"Size of base:"<<sizeof(Base)<<"\n";
  cout<<"Size of Derived:"<<sizeof(Derived)<<"\n";

  Base *bp= new Derived; //Up Casting (Allowed)

  bp->Fun();//derived Fun
  bp->Gun();// base gun
  bp->Sun();//derived sun
  //bp->Run();//error

  return 0;
}
