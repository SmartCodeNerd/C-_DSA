#include<bits/stdc++.h>
using namespace std;
void print(int i,int n)
{
    if(i>1)
    print(i-1,n);
    cout<<i<<" ";
    return;
}
int main()
{
    int n;
    cin>>n;
    print(n,n);
    return 0;
}