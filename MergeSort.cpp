#include<bits/stdc++.h>
using namespace std;


void merge(int arr[],int si,int ei)
{
    int mid = (si+ei)/2;
    vector<int> temp;
    int i = si;
    int j = mid  + 1;
    while(i <= mid && j <= ei)
    {
        if(arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i <= mid)
    temp.push_back(arr[i++]);

    while(j <= ei)
    temp.push_back(arr[j++]);

    for(int idx=si,x=0;idx<=ei;idx++)//Copying from vector to array
    {
        arr[idx] = temp[x++];
    }

}

void printArr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void mergeSort(int arr[],int si,int ei)
{
    if(si >= ei)
    return;
    int mid = (si + ei)/2;
    mergeSort(arr,si,mid);
    mergeSort(arr,mid+1,ei);
    merge(arr,si,ei);
}

int main()
{
    int arr[]={6,2,5,3,1,4};
    int n = sizeof(arr)/sizeof(int);
    mergeSort(arr,0,n-1);
    printArr(arr,n);
    return 0;
}