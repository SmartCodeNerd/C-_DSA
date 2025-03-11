#include<iostream>
using namespace std;

// void PrintMatrix(int *mat[][], int r ,int c)
// {
//     for(int i=0;i<r;i++)
//     {
//         cout<<"Student-"<<i+1;
//         for(int j=0;j<c;j++)
//         {
//             cout<<mat[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

int main()
{
    int marks[3][3]={{100,100,100},{90,80,90},{90,80,70}};
    for(int i=0;i<3;i++)
    {
        cout<<"Student-"<<i+1<<endl;
        for(int j=0;j<3;j++)
        {
            cout<<marks[i][j]<<" ";
        }
        cout<<endl;
    }
    //PrintMatrix(&marks,3,3);
}