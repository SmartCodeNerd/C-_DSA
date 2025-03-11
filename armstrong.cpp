#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,temp,cnt=0,sum=0,dgt;
    cin>>num;
    temp=num;
    while(temp)
    {
        temp=temp/10;
        cnt++;
    }
    temp=num;
    while(temp)
    {
        dgt=temp%10;
        sum+=pow(dgt,cnt);
        temp/=10;
    }
    if(sum == num)
    cout<<"Armstrong"<<endl;
    else
    cout<<"Not a Armstrong"<<endl;
    return 0;
}