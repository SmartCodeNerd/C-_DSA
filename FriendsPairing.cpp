#include<iostream>
using namespace std;

int Pairing(int n)
{
    if(n == 1 || n == 2)
    return n;
    return Pairing(n-1) + (n-1) * Pairing(n-2);
}

int main()
{
    cout<<Pairing(4);
}