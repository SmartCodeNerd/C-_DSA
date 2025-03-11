#include<iostream>
using namespace std;

int largest(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c)
        return a;
        else
        return c;
    }
    else
    {
        if(b>c)
        return b;
        else
        return c;
    }
}

int main()
{
    int a=9,b=11,c=10;
    cout<<largest(a,b,c);
    return 0;
}