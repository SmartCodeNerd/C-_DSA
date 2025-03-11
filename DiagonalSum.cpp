#include<iostream>
using namespace std;

int main()
{
    int arr[3][3]={{1,2,3},
                 {5,6,7},
                 {9,10,11}};
    int sum=0,n=3,m=3;
    //O(n^2)
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         if(i == j || i+j == n-1)
    //         sum+=arr[i][j];
    //     }
    // }
    //O(n)
    for(int i=0;i<n;i++)
    {
        int j=n-i-1;
        sum+=arr[i][i];
        if(i != j)
        sum+=arr[i][j];
    }
    cout<<sum;
    //DiagonalSum(arr,4);
}