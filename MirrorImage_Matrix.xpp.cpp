#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void MirroImage(int arr[][3],int n,int m)
// {
//     int temp=arr[n-1][0];
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i;j<m;j++)
//         {
//             if(i+j % 2 !=0)//Odd
//             {
//                 swap(arr[i][j],arr[i+1][j+1]);
//             }
//             else//Even
//             {
//                 if(i % 2 == 0)
//                 {
//                     swap(temp,arr[i][j]);
//                 }
//             }
//         }
//     }
//     arr[n-1][0]=temp;
// }

void PrintMat(int mat[][3],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int arr[3][3]={{1,2,3},
                   {4,5,6},
                   {7,8,9}};
    int n=3,m=3;
    //BruteForce Approach
    // int ans[3][3]={{0}},n=3;
    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         ans[j][n-i-1]=arr[i][j];
    //     }
    // }

    //Optimised Approach

    //Transpose
    for(int i=0;i<=n-2;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }

    //Reverse Each Row
    int mid=m/2;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<mid;j++)
    //     {
    //         swap(arr[i][j],arr[i][m-1-j]);
    //     }
    // }
    for(int i=0;i<n;i++)
    {
        reverse(arr[i],arr[i]+n);
    }

    PrintMat(arr,3,3);
    return 0;
}