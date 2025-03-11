#include<iostream>
using namespace std;

int Count(int arr[][3],int n,int m,int key)
{
    int cnt=0;
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<m;j++)
       {
           if(arr[i][j] == key)
           cnt++;
       }
    }
    return cnt;
}

int main()
{
    int arr[3][3]={{4,7,8},{6,7,8},{10,11,12}};
    //cout<<Count(arr,2,3,4);
    int sum=0;
    for(int j=0;j<3;j++)
    {
        sum+=*(*(arr+1)+j);
    }
    cout<<sum;
    return 0;
}