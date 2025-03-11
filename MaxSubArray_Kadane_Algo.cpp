#include<iostream>
using namespace std;

void printSubArraySum(int arr[],int n)
{   
    int maxSum=INT16_MIN,CurrSum=0;
    for(int i=0;i<n;i++)
    {
        CurrSum+=arr[i];
        maxSum=max(maxSum,CurrSum);
        if(CurrSum<0)
            CurrSum=0;
    }
    cout<<maxSum;
}

int main()
{
    // int arr[]={2,-3,6,-5,4,2};
    int arr[]={-13,0,6,15,16,2,15,-12,17,-16,0,-3,19,-3,2,-9,-6};
    int n=sizeof(arr)/sizeof(int);
    printSubArraySum(arr,n);
    return 0;
}