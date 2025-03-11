#include<iostream>
using namespace std;
int main()
{
    int n;
    // cout<<"Enter n\n";
    cin>>n;
    while(n>0)
    {
        n-=2;
    } 
    if(n==0)
    cout<<"Even";
    else
    cout<<"Odd";
}