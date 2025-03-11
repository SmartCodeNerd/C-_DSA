#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void name(int i,int n)
{
    if(i>n)//base condition
    return;
    cout<<"Gulshan"<<endl;
    name(i+1,n);
}
int main()
{
    int n;
    cin>>n;
    name(1,n);
    return 0;
}