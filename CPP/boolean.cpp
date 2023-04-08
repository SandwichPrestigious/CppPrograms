#include<iostream>
using namespace std;
bool CheckEven(int No)
{
    if((No%2)==0)
    {
        return true;


    }
    else{
        return false;
    }
}

int main()
{
    int value=0;
    bool bRet;

    cout<<"Enter number:";
    cin>>value;

    bRet= CheckEven(value);

    if(bRet==true)
    {
        cout<<"It is even\n";
    }
    else{
        cout<<"It is odd\n";
    }
    return 0;
}
