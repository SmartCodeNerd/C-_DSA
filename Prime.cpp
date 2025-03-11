#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cnt++;
            if((n/i)!=i)
            cnt++;
        }
    }
    if(cnt==2)
        cout<<"Prime"<<endl;
    else if(cnt==1)
        cout<<"Not a Prime,Nor Composite"<<endl;
    else cout<<"Not a Prime"<<endl;
    return 0;
}