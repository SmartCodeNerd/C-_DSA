#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int nsp=2*n-2;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<j+1;
        }
        for(int j=0;j<nsp;j++)
        {
            cout<<" ";
        }
        for(int j=i+1;j>0;j--)
        {
            cout<<j;
        }
        cout<<endl;
        nsp-=2;
        
    }
}