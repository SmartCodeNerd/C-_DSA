#include<iostream>
using namespace std;

int lin_srch(int arr[],int n ,int key)
{
    for(int i=0;i<n;i++)
    {   
        if(arr[i] == key)
        return i;
    }
    return -1;
}

int main()
{
    int arr[]={2,4,6,8,10,12,14,16};
    int n = sizeof(arr) / sizeof(int);
    int key=12;
    int idx=lin_srch(arr,n,key);
    if(idx != -1)
    cout<<"Element found at index "<<idx;
    else
    cout<<"Element not found";
    return 0;
}