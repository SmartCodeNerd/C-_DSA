#include<bits/stdc++.h>
using namespace std;



int Partition(int arr[],int si,int ei)
{
    int pivot=arr[ei];

    int i = si - 1;
    for(int j=si;j<ei;j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            swap(arr[j],arr[i]);
        }
    }
    i++;
    swap(arr[i],arr[ei]);
    return i;
}
 
void QuickSort(int arr[],int si,int ei)
{
    if(si >= ei)//Base Case
    return;

    int pivotIdx=Partition(arr,si,ei);

    QuickSort(arr,si,pivotIdx-1);//Left Part
    QuickSort(arr,pivotIdx+1,ei);//Right Part
}

void PrintArr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[]={7,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(int);

    QuickSort(arr,0,n-1);

    PrintArr(arr,n);
    return 0;
}