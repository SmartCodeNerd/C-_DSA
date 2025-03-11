#include<iostream>
using namespace std;

void printArr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<*(arr+i)<<endl;
    }
}

int main()
{
    int arr[5]={1,2,4,3,5};
    int n = sizeof(arr)/sizeof(int);
    printArr(arr,n);
    // int *ptr=arr;
    // cout<<arr<<endl;
    // cout<<++ptr;
}