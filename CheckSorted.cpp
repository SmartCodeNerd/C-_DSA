#include<iostream>
using namespace std;

bool isSorted(int arr[],int n,int i)
{
    if(i < n-1)
    {
        if(arr[i] > arr[i+1])
        return false;
        return isSorted(arr,n,i+1);
    }
    return true;
}

int main()
{
    int arr[]={1,4,3,4,5};
    cout<<isSorted(arr,5,0);
}