#include<stdlib.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int arr[5]; //static memory allocation

    int *p= NULL;
    p=(int *)malloc(5*sizeof(int));//dynamic using malloc

    int *q= NULL;
    q=(int *)calloc(5,sizeof(int));//dynamic using calloc

    int *x = NULL;
    x= new int [5];//it will internally call calloc function

    free(p);
    free(q);
//for c++,
//delete will internally call free function
    delete  x;//here only the first element from the array is deleted
    delete [] x;// due to [] all of the array will be deleted


    return 0;
}
