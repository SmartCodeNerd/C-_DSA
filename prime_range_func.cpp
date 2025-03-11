#include<iostream>
using namespace std;

void isPrime(int n){
    bool isPrime=true;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            isPrime=false;
            break;
        }
    }
    if(isPrime==true)
    cout<<n<<" ";
}

void prime_range(int n)
{
    for(int i=2;i<=n;i++)
    {
        isPrime(i);
    }
}

int main()
{
   prime_range(11);
   return 0;
}