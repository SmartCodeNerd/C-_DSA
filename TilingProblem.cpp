#include<iostream>
using namespace std;

int TilingWays(int n)
{
    if(n == 0 || n == 1)
    return 1;
    int ans1 = TilingWays(n-1);
    int ans2 = TilingWays(n-2);
    return ans1 + ans2;
}

int main()
{
    cout<<TilingWays(5);
}