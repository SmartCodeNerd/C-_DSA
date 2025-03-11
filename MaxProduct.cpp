#include<iostream>
using namespace std;

void MaxProduct(int arr[],int n)
{
    int pre=1,suf=1,ans=INT16_MIN;
    for(int i=0;i<n;i++)
    {
        pre*=arr[i];
        suf*=arr[n-i-1];
        ans=max(ans,max(pre,suf));
        if(pre == 0) pre =1;
        if(suf == 0) suf =1;
    }
    cout<<ans;
}

int main()
{
    int arr[]={0,10,10,10,10,10,10,10,10,10,-10,10,10,10,10,10,10,10,10,10,0};
    int n=sizeof(arr)/sizeof(int);
    MaxProduct(arr,n);
}