#include<iostream>
using namespace std;

char next(char ch)
{
    int t=ch;
    t++;
    if(t == 123 || t == 91)
    {
        ch=t-26;
        return ch;
    }
    else
    {
        ch=t;
        return ch;
    }
}

int main()
{
    char ch='z';
    cout<<next(ch);
    return 0;
}