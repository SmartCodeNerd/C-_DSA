#include<iostream>
using namespace std;

int main()
{
    int n,prev=0,cur=1,nxt;
    cout<<"Enter the term"<<endl;
    cin>>n;
    if(n==1)
    cout<<prev<<endl;
    else if(n==2)
    cout<<cur<<endl;
    else
    {
        for(int i=3;i<=n;i++)
        {
            nxt=prev+cur;
            prev=cur;
            cur=nxt;
        }
        cout<<nxt<<endl;
    }
    return 0;
}