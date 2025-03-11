#include<iostream>
using namespace std;

int main()
{
    int n,temp,sum=0,dgt;
    cout<<"Enter number"<<endl;
    cin>>n;
    temp=n;
    while(temp)
    {
        dgt=temp%10;
        sum+=dgt;
        temp/=10;
    }
    cout<<"The sum of the digits is "<<sum<<endl;
    return 0;
}