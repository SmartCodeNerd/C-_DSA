#include<bits/stdc++.h>
using namespace std;


void Merge(int arr[],int si,int ei,int cnt)
{
    int i=si;
    int mid=(si+ei)/2;
    int j=mid+1;

    vector<int> temp;

    while(i <= mid && j <= ei)
    {
        if(arr[i] > arr[j])
        {
            cnt++;
            temp.push_back(arr[j++]);
        }
        else
        {
            temp.push_back(arr[i++]);
        }
    }

    for(int idx=si,x=0;idx<=ei;idx++)
    {
        arr[idx] = temp[x++];
    }
}

int InversionCount2(int arr[],int si,int ei,int cnt)
{
    if(si >= ei)
    return cnt;

    int mid=(si+ei)/2;
    InversionCount2(arr,si,mid,cnt);
    InversionCount2(arr,mid+1,ei,cnt);
    Merge(arr,si,ei,cnt);
}

int InversionCount(int arr[],int n)
{
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] > arr[j])
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    int arr[]={5,3,2,4,1};
    int n =sizeof(arr)/sizeof(int);

    //cout<<InversionCount(arr,n);
    cout<<InversionCount2(arr,0,n-1,0);
    return 0;
}