#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool duplicate(int nums[],int n)
{
    // bool flag=false;
    // for(int i=0;i<n;i++)
    // {
    //     int key=nums[i];
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if(key == nums[j])
    //             flag=true;
    //     }
    //     if(flag)
    //     {
    //         cout<<"True"<<endl;
    //         break;
    //     }
    // }    
    // if(!flag)
    // cout<<"False"<<endl;
    sort(nums,nums+n);
    for(int i=0;i<n-1;i++)
    {
        if(nums[i] == nums[i+1])
        return true;
    }
    return false;
}

int main()
{
    int nums[]={1,2,3,4};
    int n=sizeof(nums)/sizeof(int);
    cout<<duplicate(nums,n);
    return 0;
}
