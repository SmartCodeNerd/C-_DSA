#include<bits/stdc++.h>
using namespace std;

void Merge(string arr[],int si,int ei)
{
    int mid=(si+ei)/2;
    vector<string> temp;
    int i=si;
    int j=mid+1;

    while(i<=mid && j<=ei)
    {
        if(arr[i] <= arr[j])
        temp.push_back(arr[i++]);
        else
        temp.push_back(arr[j++]);
    }

    while(i <= mid)
    temp.push_back(arr[i++]);

    while(j <= ei)
    temp.push_back(arr[j++]);

    for(int idx=si,x=0;idx<=ei;idx++)
    {
        arr[idx] = temp[x++];
    }
}

void MergeSort(string arr[],int si,int ei)
{
    if(si >= ei)
    return;
    int mid = (si+ei)/2;
    MergeSort(arr,si,mid);
    MergeSort(arr,mid+1,ei);
    Merge(arr,si,ei);
}


void PrintArr(string arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    string arr[]={"sun","earth","mars","mercury"};
    int n = sizeof(arr)/sizeof(string);
    MergeSort(arr,0,n-1);
    PrintArr(arr,n);
    return 0;
}