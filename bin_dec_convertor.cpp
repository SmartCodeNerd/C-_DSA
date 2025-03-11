#include<iostream>
#include<cmath>
using namespace std;

int bin_dec(int bin)
{
    int sum=0,dgt,temp,exp=0;
    temp=bin;
    while(temp)
    {
        dgt=temp%10;
        sum=sum+dgt*pow(2,exp);
        exp++;
        temp/=10;
    }
    return sum;
}
int main()
{
    int bin=1000101;
    int dec=bin_dec(bin);
    cout<<dec;
    return 0;
}