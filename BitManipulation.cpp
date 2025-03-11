#include<bits/stdc++.h>
using namespace std;

void OddEven(int num)
{
    int val = num & 1;
    if(val)
    cout<<"Odd"<<endl;
    else
    cout<<"Even"<<endl;
}

void FindithBit(int num,int i)
{
    int mask = 1 << i;
    int val = num & mask;
    if(!val)
    cout<<"0"<<endl;
    else
    cout<<"1"<<endl; 
}

void SetithBit(int num,int i)
{
    int mask = 1 << i;
    int res = (num | mask);
    cout<<res<<endl;
}

void ClearithBit(int num,int i)
{
    int mask=~(1 << i);
    int val=(num & mask);
    cout<<val<<endl;

}

void CheckPower2(int num)
{
    int res=(num & num-1);
    if(!res)
    cout<<"Power of 2"<<endl;
    else
    cout<<"Not a power of 2"<<endl;
}

void UpdateithBit(int num,int i,int val)
{
    // if(val)
    // {
    //     int mask=1<<i;
    //     int res=num | mask;
    //     cout<<res<<endl;
    // }
    // else
    // {
    //     int mask=~(1<<i);
    //     int res=num & mask;
    //     cout<<res<<endl;
    // }
    num = num & ~(1 << i);

    num = num | (val << i); 
    cout<<num<<endl;
}

void CleariBits(int num,int i)
{
    int mask=~0 << i;
    int res=num & mask;
    cout<<res<<endl;
}

void CountSetBit(int num)
{
    int cnt=0;
    while(num)
    {
        int res = num & 1;
        cnt+=res;
        num = num >> 1;
    }
    cout<<cnt<<endl;
}

void FastExpo(int num,int exp)
{
    int ans=1;
    while(exp)
    {
        int lastBit = exp & 1;
        if(lastBit)
        {
            ans = ans * num;  
        }
        num = num * num;
        exp = exp >> 1;
    }
    cout<<ans<<endl;
}

int main()
{
    // OddEven(18);
    // FindithBit(7,5);
    // SetithBit(6,3);
    //ClearithBit(6,1);
    //CheckPower2(18);
    //UpdateithBit(7,2,0);
    //CleariBits(63,4);
    //CountSetBit(8);
    FastExpo(3,5);
}