#include<iostream>
using namespace std;

void Print(int arr[],int n,int key,int i)
{
    if(i<n)
    {
        if(key == arr[i])
        cout<<i<<" ";
        Print(arr,n,key,i+1);
    }
    return;
}

int main()
{
    int arr[]={3,2,4,5,6,2,7,2,2};
    int key=2;
    int n=sizeof(arr)/sizeof(int);
    Print(arr,n,key,0);
}