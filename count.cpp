#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=16,sum=0,dgt=0,temp;
    temp=n;
    while(n>0)
    {
        dgt=n%10;
        sum=sum+pow(dgt,3);
        n=n/10;
    }
    if(temp==sum)
    cout<<"Armstrong";
    else
    cout<<"Not a Armstrong"<<endl;
    n=36;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        cout<<i<<" ";
        else continue;
    }

}
