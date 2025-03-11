#include<iostream>
using namespace std;

int main()
{
    int n=10    ,nsp=n-1,nst=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=nsp;j++)
        {
            cout<<" ";
        }
        
        for(int k=1;k<=nst;k++)
        {
            cout<<"*";
        }

        cout<<endl;
        nsp--;
        nst++;
    }
}