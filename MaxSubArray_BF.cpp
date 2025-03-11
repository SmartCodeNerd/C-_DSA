#include<iostream>
using namespace std;

void maxSubArray(int arr[],int n)
{
    int max=arr[0],sum=0,max_st=0,max_end=0;
    for(int st=0;st<n;st++)
    {
        for(int end=st;end<n;end++)
        {
            for(int i=st;i<=end;i++)
            {
                sum+=arr[i];
            }
            if(max<sum)
            {
                max=sum;
                max_st=st;
                max_end=end;
            }
            sum=0;
        }
    }
    cout<<max<<" "<<max_st<<" "<<max_end;
}

int main()
{
    int arr[]={2,-3,6,-5,4,2};
    //int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    maxSubArray(arr,n);
    return 0;
}