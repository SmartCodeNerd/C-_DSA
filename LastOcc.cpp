#include<bits/stdc++.h>
using namespace std;

int LastOcc(vector<int> v1,int target,int i)
{
    if(i == -1)
    return -1;
    if(v1[i] == target)
    return i;
    return LastOcc(v1,target,i-1);
}

int main()
{
    vector<int> v1={1,2,3,3,3,4};
    cout<<LastOcc(v1,3,v1.size()-1);
    return 0;
}