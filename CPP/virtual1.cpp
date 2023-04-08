#include<iostream>
using namespace std;
class  Base
{
public:
  int a, b;

  void Fun()      //1000
  {
    cout<<"Inside Fun of base"<<"\n";
  }
  void Gun()     //2000
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
  void Gun()     //2000
  {
    cout<<"Inside Gun of derived"<<"\n";

  }
    void Sun()     //3000
    {
      cout<<"Inside Sun of derived"<<"\n";

    }

};

int main()
{
  Derived dobj;

  dobj.Fun();
  dobj.Gun();
  dobj.Sun();

  Base *bp= new Base;       //No casting
  Derived *dp= new Derived; //no casting

  Base *bp1= new Derived;   //upcasting (allowed)
//  Derived dp1= new Base;    //downvasting (not allowed)

  return 0;
}
