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

void BubbleSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
}

int main()
{
    int arr[]={5,4,1,3,2};
    int n=sizeof(arr)/sizeof(int);
    BubbleSort(arr,n);
    PrintArr(arr,n);
    return 0;
}