#include<iostream>
using namespace std;
int main()
{
    int n;
    int st;
    cin>>n;
    int sp=n-1;
    for(int i=0;i<n;i++)
    {
        st=i+1;
        if(i>n/2)
        st=n-i;
        for(int j=0;j<st;j++)
        cout<<"*";
        for(int j=0;j<sp;j++)
        cout<<" ";
        for(int j=0;j<st;j++)
        cout<<"*";
        if(i>=n/2)
        sp+=2;
        else
        sp-=2;
        cout<<endl;        
    }
}