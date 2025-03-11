#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n)
{
    if(n == 1)
    return false;
    bool isPrime=true;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n % i == 0)
        isPrime = false;
    }
    return isPrime;
}
int main()
{
    cout<<isPrime(1);
    return 0;
}