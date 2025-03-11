#include<bits/stdc++.h>
using namespace std;

void CorrectRange(vector<int> v1)
{
    int n=v1.size();
    int duplicate,missing;
    for(int i=0;i<n;i++)
    {
        if(v1[i] != i+1)
        {
            if(v1[i] == v1[i-1])
            {
                duplicate=i;
                missing=i+1;
            }
        }
    }
    //return {duplicate,missing};
    cout<<duplicate<<" "<<missing<<" ";
}

int main()
{
    vector<int> v1={1,2,2,4};
    CorrectRange(v1);
    // cout<<"Duplicate "<<res[0]<<" ";
    // cout<<"Missing "<<res[1];
    // for(int i=0;i<res.size();i++)
    // {
    //     cout<<res[i]<<" ";
    // }
    return 0;
}
