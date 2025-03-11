#include<bits/stdc++.h>
using namespace std;
int main()
{
        // pair<int,int>p1={1,2};
        // cout<<p1.first<<" "<<p1.second;
        // pair<int,int>arr[5]={{1,2},{3,4},{5,6}};
        // cout<<endl;
        // cout<<arr[1].second<<" "<<arr[2].first;

        vector<int> v;
        v.push_back(2);
        v.emplace_back(3);//{2,3}
        v.push_back(4);
        v.push_back(5);
        v.push_back(6);//v={2,3,4,5,6}
        // vector<int>::iterator i=v.begin();
        // i++;
        // cout<<*(i)<<" ";
        // i+=2;
        //cout<<*(i)<<" ";
        // for(int i=0;i<5;i++)
        // cout<<v[i]<<" ";
        v.push_back(7);
        vector<int>::iterator i=v.begin;
        cout<<*(i)<<" ";
        //cout<<*(i)<<" ";
        return 0;

}