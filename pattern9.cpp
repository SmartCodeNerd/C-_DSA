#include<iostream>
using namespace std;

int main()
{
    int n=10,nsp=n/2-1,nst=1;
    for(int i=1;i<=n;i++)
    {
       if(i<=n/2)
       {
            for(int j=1;j<=nsp;j++)
            {
                cout<<" ";
            }
            for(int k=1;k<=nst;k++)
            {
                cout<<"*";
            }
            // for(int j=1;j<=nsp;j++)
            // {
            //     cout<<" ";
            // }
            nsp-=1;
            nst+=2;
        }
        else
        {
            nsp+=1;
            nst-=2;
            for(int j=1;j<=nsp;j++)
            {
                cout<<" ";
            }
            for(int k=1;k<=nst;k++)
            {
                cout<<"*";
            }
            // for(int j=1;j<=nsp;j++)
            // {
            //     cout<<" ";
            // }
        }
        cout<<endl;
    }
}