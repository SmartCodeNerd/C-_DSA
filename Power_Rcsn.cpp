#include<iostream>
using namespace std;

int power(int x,int n,int ans)
{
    if(n == 0)
    return ans;
    ans *= x;
    return power(x,n-1,ans);
}

int power2(int x,int n)
{
    if(n == 0)
    return 1;
    int halfPow = power2(x,n/2);
    if(n % 2 == 0)//Even
        return halfPow * halfPow;
    else//Odd
        return x * halfPow * halfPow;
}

int main()
{
    //cout<<power(2,10,1);
    cout<<power2(2,10);
    return 0;
}
