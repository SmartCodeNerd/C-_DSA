#include<iostream>
using namespace std;

void Transpose(int arr[][3],int n,int m)
{
    int arr1[m][n]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            arr1[j][i] = arr[i][j];
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int arr[2][3]={{4,7,8},{6,7,8}};
    Transpose(arr,2,3);
    return 0;
}