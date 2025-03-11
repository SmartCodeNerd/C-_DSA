#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int size;
    // cin>>size;
    // int *arr=new int[size];
    // int x=1;
    // for(int i=0;i<size;i++)
    // {
    //     arr[i]=x++;
    //     cout<<arr[i]<<" ";
    // }
    
    int rows=4,cols=3;
    int* *matrix = new int* [rows];
    
    for(int i=0;i<rows;i++)
    {
        matrix[i]=new int[cols];
    }

    int x=1;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            matrix[i][j] = x;
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}