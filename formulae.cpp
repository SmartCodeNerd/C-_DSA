#include<iostream>
using namespace std;

int formulae(int a,int b)
{
    return a*a+b*b+2*a*b;
}

int main()
{
    int a=3,b=3;
    cout<<formulae(a,b);
    return 0;
}