#include<iostream>
using namespace std;

// void changeA(int a)//Pass By value
// {
//     a=20;
//     cout<<a<<endl;
// }

// void changeA(int *ptr)//Using Pointers
// {
//     *ptr=20;
//     cout<<*ptr<<endl;
// }

void changeA(int &b)
{
    b=20;
    cout<<b<<endl;
}

void printArr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    // int a=10;
    // changeA(a);
    // cout<<a<<endl;
    // int &b=a;
    // b=25;
    // cout<<a<<" "<<b<<endl;
    // int x=5,y=10;
    // int *ptr1=&x,*ptr2=&y;
    // // ptr2=ptr1;
    // cout<<*ptr2;
    // int t=0;
    // int  *ptr=&t;
    // cout<<endl<<&t<<" "<<ptr<<" "<<*ptr;
    // int *pt=NULL;
    // cout<<pt<<endl;
    // int a=32;
    // int *ptr=&a;//*ptr=32
    // char ch='A';
    // char &cho=ch;//cho='A'

    // cho+=a;//cho=65+32=97->'a'
    // *ptr+=ch;//32+97->129
    // cout<<a<<","<<ch<<endl;
    int arr[]={1,2,3,4,5};
    int n= sizeof(arr) / sizeof(int);
    // int *ptr=&arr[1];
    // cout<<*arr<<endl;
    // cout<<*(arr+1)<<endl;
    // cout<<ptr;
    printArr(arr,n);
    return 0;
}