#include<iostream>
using namespace std;

int main()
{
    int n=6,nsp=n-1,nst=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=nsp;j++)//For Spaces
        {
            cout<<" ";
        }
        for(int k=1;k<=nst;k++)//For Stars
        {
            cout<<"*";
        }
        nsp--;
        cout<<endl;
    }
}