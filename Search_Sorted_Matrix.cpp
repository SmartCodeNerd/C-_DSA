#include<iostream>
using namespace std;

int main()
{
    int arr[4][4]={{10,20,30,40},
                   {15,25,35,45},
                   {27,29,37,48},
                   {32,33,39,50}};
    int key=36;
    // for(int i=0;i<4;i++)
    // {
    //     if(arr[i][0] > key)
    //     {
    //         cout<<"Element Not Found";
    //         break;
    //     }
    //     else if(arr[i][0] <= key)
    //     {
    //         for(int j=0;j<4;j++)
    //         {
    //             if(arr[i][j] == key)
    //             {
    //                 cout<<"Found at "<<i<<" "<<j;
    //                 break;
    //             }
    //         }
    //         cout<<"Element not Found";
    //         break;
    //     }
    // }
    //Brute Force Approach
    // int flag=0;
    // for(int i=0;i<4;i++)
    // {
    //     for(int j=0;j<4;j++)
    //     {
    //         if(arr[i][j] == key)
    //         {
    //             cout<<i<<" "<<j;
    //             flag++;
    //         }
    //     }
    // }
    // if(!flag)
    // cout<<"Element Not Found";

    // //Row-Wise Binary Search

    // int flag=0;
    // for(int i=0;i<4;i++)
    // {
    //     int st=0,end=3,mid;
    //     while(st<=end && !flag)
    //     {
    //         mid=(st+end)/2;
    //         if(arr[i][mid] == key)
    //         {
    //             cout<<i<<" "<<mid;
    //             flag++;
    //         }
    //         else if(arr[i][mid] > key)
    //         {
    //             end=mid-1;
    //         }
    //         else
    //         {
    //             st=mid+1;
    //         }
    //     }
    // }
    // if(!flag)
    // {
    //     cout<<"Element Not Found"<<endl;
    // }

    //StairCase Approach

    int r=0,c=3,flag=0;
    while(r<4 && c>=0)
    {
        if(arr[r][c] == key)
        {
            cout<<r<<" "<<c;
            flag++;
            break;
        }
        else if(arr[r][c] > key)//Left
        {
            c--;
        }
        else//Down
        {
            r++;
        }
    }
    if(!flag)
    cout<<"Element Not Found"<<endl;
}