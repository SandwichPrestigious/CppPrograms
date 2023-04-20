#include<iostream>
using namespace std;

template <class T>
class SwaroopArray
{
    private:
        T *Arr;
        int iSize;
    
    public:
        SwaroopArray(int Length)
        {
            cout<<"Inside Constructor"<<"\n";
            iSize= Length;
            Arr= new T      [iSize];
        }
        ~SwaroopArray()
        {
            cout<<"Inside Constructor"<<"\n";
            delete[]Arr;
        }
        void Accept()
        {
            cout<<"Enter the values:"<<"\n";
            for(int i =0; i<iSize; i++)
            {
                cin>>Arr[i];
            }
        };
        void Display()
        {
            cout<<"Elements of array are:"<<"\n";
            for(int i=0; i<iSize; i++)
            {
                cout<<Arr[i]<<"\n";
            }
        };
        T Addition()
        {
            T iSum=0;
            for(int i=0; i<iSize; i++)
            {
                iSum=iSum+ Arr[i];
            }
            return iSum;
        };
};

int main()
{
    SwaroopArray <int>sobj1(3);
    SwaroopArray <float>sobj2(4);

    sobj1.Accept();
    sobj1.Display();

    sobj2.Accept();
    sobj2.Display();

    int iRet=0;
    float fRet=0;
    iRet= sobj1.Addition();
    cout<<"Addition of sobj1 is:"<<iRet<<"\n";

    
    fRet= sobj2.Addition();
    cout<<"Addition of sobj2 is:"<<iRet<<"\n";

    return 0;
    
}