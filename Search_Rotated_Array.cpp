#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int SearchRotate(int arr[],int n,int target)
{
    int l=0,h=n-1;
    while(l<=h)
    {
        int m=(l+h)/2;
        if(arr[m] == target)
        return m;
        if(arr[l]<=arr[m])//First Half Sorted
        {   
            if(target<=arr[m] && target>=arr[l])
            {
                h=m-1;
            }
            else
            {
                l=m+1;
            }
        }
        else//Second Half Sorted
        {
            if(target>=arr[m] && target<=arr[h])
            {
                l=m+1;
            }
            else
            {
                h=m-1;
            }
        }

    }
    return -1;
}

int main()
{
    int nums[]={7,8,9,1,2,3,4,5,6};
    int n=sizeof(nums)/sizeof(int);
    cout<<SearchRotate(nums,n,1);//Output=3
}