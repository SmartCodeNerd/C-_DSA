#include<iostream>
using namespace std;

int main()
{
    int n,prev=0,cur=1,nxt;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<prev<<" "<<cur<<" ";
    for(int i=2;i<n;i++)
    {
        nxt=prev+cur;
        cout<<nxt<<" ";
        prev=cur;
        cur=nxt;
    }
}