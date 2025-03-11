#include<bits/stdc++.h>
using namespace std;

int FirstOcc(vector<int> v1,int target,int i)
{
    int n=v1.size();
    if(i == n)
    return -1;
    if(v1[i] == target)
    return i;
    return FirstOcc(v1,target,i+1);
}

int main()
{
    vector<int> v1={1,2,2,4};
    cout<<FirstOcc(v1,3,0);
    return 0;
}