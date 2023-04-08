#include<iostream>
using namespace std;

float Area(float Radius, float PI=3.14f) // the value for PI is called as default argument
{
    float ans =0.0f;
    ans = PI *Radius*Radius;

    return ans;
}

int main()
{
  
    float r= 0.0f;
    float fRet= 0.0f;

    cout<<"Enter the radius"<<"\n";
    cin>>r;

    fRet= Area(r);
    cout<<"Area of circle is:"<<fRet<<"\n";

    fRet= Area(r, 7.10f); // here the value of PI becomes 7.10 instead of 3.14.
    cout<<"Area of circle is:"<<fRet<<"\n";

    return 0;
    
}