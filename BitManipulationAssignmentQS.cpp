#include<bits/stdc++.h>
using namespace std;

void ClearBitsRange(int num,int i,int j)
{
    for(int k=i;k<=j;k++)
    {
        int mask = 1 << k;
        int bit = num & mask;
        if(bit)
        {
            num = num & ~mask;
        }
    }
    cout<<num<<endl;
}

int main()
{
    ClearBitsRange(31,1,3);
}