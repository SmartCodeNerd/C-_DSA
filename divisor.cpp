#include<bits/stdc++.h>
using namespace std;
void print_divisor(int n)
{
    vector<int>ls;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            ls.push_back(i);
            if((n/i)!=i)
            ls.push_back(n/i);
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it:ls)
    cout<<it<<" ";
}
int main()
{
    int num;
    cin>>num;
    print_divisor(num);
    return 0;
}