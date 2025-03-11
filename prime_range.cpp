#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    bool isPrime = true;
    for(int i=2;i<=n;i++)
    {
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i % j == 0)
            isPrime = false;
        }
        if(isPrime)
        cout<<i<<" ";
        isPrime = true;
    }
    return 0;
}