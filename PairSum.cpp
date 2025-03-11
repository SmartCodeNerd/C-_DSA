#include<bits/stdc++.h>
using namespace std;

//BruteForce Approach
// vector<int> PairSum(vector<int> vec,int target)
// {
//     vector<int> res;
//     for(int i=0;i<vec.size();i++)
//     {
//         for(int j=0;j<vec.size();j++)
//         {
//             if(vec[i] + vec[j] == target)
//             {
//                 res.push_back(i);
//                 res.push_back(j);
//                 return res;
//             }
//         }
//     }
// }

//Two Pointers Approach
vector<int> PairSum(vector<int> vec1,int target)
{
    vector<int> res;
    int st=0,end=vec1.size()-1;
    while(st<end)
    {
        int CurrSum = vec1[st] + vec1[end];
        if(CurrSum == target)
        {
            res.push_back(st);
            res.push_back(end);
            return res;
        }
        else if(CurrSum > target)
        {
            end--;
        }
        else
        {
            st++;
        }
    }
}

int main()
{
    vector<int> vec={2,7,11,15};
    int target=17;
    vector<int> res = PairSum(vec,target);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}