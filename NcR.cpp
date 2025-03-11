#include<iostream>
using namespace std;

int fact(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int binCoeff(int a,int b)
{
    return fact(a)/(fact(b)*fact(a-b));
}
int main()
{
    int res=binCoeff(10,6);
    cout<<res;
    return 0;
}