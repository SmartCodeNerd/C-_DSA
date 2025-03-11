#include<iostream>
using namespace std;

void printSubArraySum(int arr[],int n)
{   
    int maxSum=0;
    for(int st=0;st<n;st++)
    {
        int CurrSum=0;
        for(int end=st;end<n;end++)
        {
            CurrSum+=arr[end];
            maxSum=max(maxSum,CurrSum);
        }
    }
    cout<<maxSum;
}

int main()
{
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    printSubArraySum(arr,n);
    return 0;
}