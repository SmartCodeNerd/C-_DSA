#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int> try()
{
    vector<int>ls;
    ls.push_back(1);
    ls.push_back(2);
    ls.push_back(3);
    ls.push_back(4);
    ls.push_back(5);
    return ls;
}
int main()
{
     vector<int>ls1;
     ls1=try();
    // cout<<ls.size()<<endl;
    // cout<<ls[0]<<endl;
    for(auto it:ls1)
    cout<<it<<" ";
    
    return 0;
}