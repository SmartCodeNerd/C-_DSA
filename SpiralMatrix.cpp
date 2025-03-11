#include<iostream>
using namespace std;

// void InpuMatrix(int **arr,int row,int col)
// {
//     for(int i=0;i<row;i++)
//     {
//         for(int j=0;j<col;j++)
//         {
//             cin>>arr[i][j];
//         }
//     }
// }

// void PrintArr(int **arr,int row,int col)
// {
//     for(int i=0;i<row;i++)
//     {
//         for(int j=0;j<col;j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

int main()
{
    //int row,col;
    //cin>>row>>col;
    // int arr[3][5]={ {1,2,3,4,5},
    //                 {5,6,7,8,9},
    //                 {9,10,11,1,2}};

    int arr[3][3]={ {1,2,3},
                    {5,6,7},
                    {9,10,11}};
    //int arr[row][col];
    // InputMatrix(arr,row,col);
    // PrintArr(arr,row,col);
    int srow=0,scol=0,erow=2,ecol=2;
    while(srow <= erow && scol <= ecol)
    {
        //Top
        for(int j=scol;j<=ecol;j++)
        {
            cout<<arr[srow][j]<<" ";
        }
        //Right
        for(int i=srow+1;i<=erow;i++)
        {
            cout<<arr[i][ecol]<<" ";
        }
        //Bottom
        for(int j=ecol-1;j>=scol;j--)
        {
            if(srow == erow)
            {
                break;
            }
            cout<<arr[erow][j]<<" ";
        }
        //Left
        for(int i=erow-1;i>=srow+1;i--)
        {
            if(scol == ecol)
            {
                break;
            }
            cout<<arr[i][scol]<<" "; 
        }
        srow++;
        scol++;
        erow--;
        ecol--;
    }
}