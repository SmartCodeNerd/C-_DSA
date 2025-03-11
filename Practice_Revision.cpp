#include<iostream>
using namespace std;

int MaxSum(int arr[],int n)
{
    int sum = 0,maxSum = 0;
    for(int st=0;st<n;st++)
    {
        for(int end=st;end<n;end++)
        {
            for(int i=st;i<=end;i++)
            {
                sum += arr[i];
            }
            maxSum=max(sum,maxSum);
            sum = 0;
        }
    }
    return maxSum;
}

int main()
{
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(n);
    cout<<MaxSum(arr,n);
    return 0;
}