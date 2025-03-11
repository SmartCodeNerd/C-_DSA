#include<iostream>
using namespace std;

int sum_dgt(int n)
{
    int sum=0,dgt,temp;
    temp=n;
    while(n)
    {
        dgt=n%10;
        sum+=dgt;
        n/=10;
    }
    return sum;
}

int main()
{
    int n=13112;
    cout<<sum_dgt(n);
    return 0;
}