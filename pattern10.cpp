#include<iostream>
using namespace std;

int main()
{
    int n=14,nsp=n-2,nst=1;
    for(int i=1;i<=n;i++)
    {
        if(i<=n/2)
        {
            for(int j=1;j<=nst;j++)
            {
                cout<<"*"<<" ";
            }
            for(int k=1;k<=nsp;k++)
            {
                cout<<"  ";
            }
            for(int j=1;j<=nst;j++)
            {
                cout<<"*"<<" ";
            }
            nst+=1;
            nsp-=2;
            cout<<endl;
        }
        else
        {
            nsp+=2;
            nst-=1;
            for(int j=1;j<=nst;j++)
            {
                cout<<"*"<<" ";
            }
            for(int k=1;k<=nsp;k++)
            {
                cout<<"  ";
            }
            for(int j=1;j<=nst;j++)
            {
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
    }
}