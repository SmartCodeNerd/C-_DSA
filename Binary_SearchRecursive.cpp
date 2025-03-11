#include<iostream>
using namespace std;

int BS(int arr[],int n,int key,int st,int end)
{
    if(st <= end)
    {
        int mid = (st+end)/2;
        if(key == arr[mid])//1 2 3 4 5 6 7
        return mid;
        if(key < arr[mid])
        return BS(arr,n,key,st,mid-1);
        if(key > arr[mid])
        return BS(arr,n,key,mid+1,end);
    }
    else
        return -1;
}

// int BS(int arr[],int n,int key,int st,int end)
// {
//     if(st > end)
//     return -1;
//     int mid = (st+end)/2;
//     if(key == arr[mid])
//     return mid;
//     if(key > arr[mid])
//     return BS(arr,n,key,mid+1,end);
//     if(key < arr[mid])
//     return BS(arr,n,key,st,end-1);
// }

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(int);
    int key = 5;
    cout<<BS(arr,n,key,0,n-1);
    return 0;
}