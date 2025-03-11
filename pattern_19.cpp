#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    n=n/2;
    int sp,st;
    for(int i=0;i<n;i++)
    {
        sp=2*i;
        st=n-i;
        for(int j=0;j<st;j++)
        cout<<"*";
        for(int j=0;j<sp;j++)
        cout<<" ";
        for(int j=0;j<st;j++)
        cout<<"*";
        cout<<endl;
    }
    sp=2*n-2;
    for(int i=0;i<n;i++)
    {
        st=i+1;
        for(int j=0;j<st;j++)
        cout<<"*";
        for(int j=0;j<sp;j++)
        cout<<" ";
        for(int j=0;j<st;j++)
        cout<<"*";
        cout<<endl;
        sp-=2;;
    }
}