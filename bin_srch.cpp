#include<iostream>
using namespace std;

int bin_srch(int arr[],int n,int key)
{
    int st=0,end=n-1,mid;
    while(st <= end)
    {
        mid=(st+end)/2;
        if(arr[mid] == key)
            return mid;
        else if(arr[mid] < key)
            st = mid+1;
        else
            end=mid-1;
    }
    return -1;
}

int main()
{
    int arr[]={2,4,6,8,10,12,14,16,18};
    int n= sizeof(arr)/sizeof(int);
    int key=11;
    cout<<(bin_srch(arr,n,key));
    return 0;
}

