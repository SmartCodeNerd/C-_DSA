#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cnt=0,sum=0,divisor=3,dividend=22;
    while(sum + divisor <= dividend)
    {
        sum += divisor;
        ++cnt;
    }
    cout<<cnt;
    return 0;
}