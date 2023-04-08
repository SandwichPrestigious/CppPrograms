#include<iostream>
//using namespace std;

namespace Marvellous
{
class Demo
{
    public: 
        int a;
        int b;
        //parameterized constructor with default arguments
        Demo(int i=10, int j=20)
        {
            a=i;
            b=j;
        }
};
}

namespace Infosystems
{
class Demo
{
    public: 
        int a;
};
}

//using namespace Marvellous;

int main()
{
    Marvellous::Demo obj1; //10,20
    //Demo obj1;
    Infosystems::Demo obj2;
    
    std::cout<<"Inside main"<<"\n";


    return 0;
}