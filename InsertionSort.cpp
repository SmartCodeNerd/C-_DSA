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

void InsertionSort(int arr[],int n)
{
    int cur,prev;
    for(int i=1;i<n;i++)
    {
        cur=arr[i];
        prev=i-1;
        while(prev>=0 && arr[prev] > cur)
        {
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
    }
}

int main()
{
    int arr[]={5,4,1,3,2};
    InsertionSort(arr,5);
    PrintArr(arr,5);
    return 0;
}