#include<iostream>
using namespace std;

int dec_bin(int dec)
{
    int sum=0,rem,temp,exp=1;
    temp=dec;
    while(temp)
    {
        rem=temp%2;
        temp=temp/2;
        sum=sum+rem*exp;
        exp*=10;
        cout<<sum<<endl;
    }
    return sum;
}

int main()
{
    int dec=4;
    int bin=dec_bin(dec);
    cout<<bin;
    return 0;
}