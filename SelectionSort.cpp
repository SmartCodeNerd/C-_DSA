#include<iostream>
using namespace std;

void PrintArr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void SelectionSort(int arr[],int n)
{
    int minidx;
    for(int i=0;i<n-1;i++)
    {
        minidx=i;
        for(int j=i;j<n;j++)
        {
            if(arr[minidx] > arr[j]) 
            {
                minidx=j;
            }
        }
        swap(arr[minidx],arr[i]);
    }
}

int main()
{
    int arr[]={5,4,1,3,2};
    int n=sizeof(arr)/sizeof(int);
    SelectionSort(arr,n);
    PrintArr(arr,n);
    return 0;
}