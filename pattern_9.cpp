#include<iostream>
using namespace std;
int main()
{
    int n;//n should be odd
    cin>>n;
    for(int i=0;i<n;i++)
    {
        if(i<=n/2)
        {
            for(int j=(n-1)/2;i>=0;i--)
            cout<<" ";
        }
        else
        {
            for(int j=(n-1)/2;i<n;i++)
            cout<<" ";
        }
        if(i<n/2)
        {
            for(int j=0;j<2*n+1;j++)
            cout<<"*";
        }
        else
        {
            for(int j=0;j<2*n+1;j++)
            cout<<"*";
        }


        
    }
}