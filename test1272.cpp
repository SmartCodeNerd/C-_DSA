#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include <sstream>
using namespace std;

    int strStr(string haystack, string needle) {
        int cnt =0;
        int haySize = haystack.size();
        int needleSize = needle.size();
        // cout<<haySize<<" "<<needleSize<<endl;
        for(int i=0;i<haySize-needleSize;i++){
            string  str = haystack.substr(i,(i+needleSize-1));
            if(str.compare(needle)){
                return cnt;
            }
            cnt++;
        }
        return -1;
    }
int main()
{
    // string seq;
    // seq[0] = 's';
    // seq[1] = 'q';
    // cout<<seq;
    // int year = 2000;
    // if(year % 4 == 0 && year % 400 == 0)
    // cout<<"Leap Year";
    // else
    // cout<<"Not a Leap Year";
    // vector<int> nums={2,7,11,15};
    // int target =9;
    // unordered_map<int,int>mpp;
    // int n = nums.size();
    // for(int i=0;i<n;i++)
    // {
    //     //mpp.insert({nums[i],i});
    //     mpp[nums[i]] = i;
        //2 0 
        //7 1 
        //11 2
        //15 3
        // if(mpp.find(target - nums[i]) != mpp.end())
        // {
        //     cout<<i<<" "<<mpp[target - nums[i]];
        // }

        // string s="My dog name is goffy";
        // istringstream iss(s);
        // for(auto it : s)
        // {
        //     cout<<it<<" ";
        //}
        // string word;
        // while (iss >> word) {
        // cout << word << endl;

        // vector<int> vec;
        // vec[2];

        // string com="";
        // com += "hello";
        // com += "world";

        // cout<<com;

        // unordered_map<int,int>mpp;
        // string s="My dog name is goffy";

        // for(auto it:s)
        // {
        //     mpp[it]++;
        // }

        // cout<<mpp[97];

        // string str = to_string(2);
        // str += "->";
        // str += to_string(3);      
        // cout<<str;
        // string s = "()[]{}";

        // for(auto it:s)
        // {
        //     cout<<it;
        // }
        // int32_t n = 00000010100101000001111010011100;
        // int32_t result = 0;
        // string res = to_string(n);
        // reverse(res.begin(),res.end());
        // result = bitset<32>(res).to_ulong();
        // //result = stoi(res);
        // cout<<result;
        // double val = 29/2.0;
        // cout<<double(2);

        // int prev2=0,prev=1,curr;


        // for(int i=2;i<=4;i++)
        // {
        //     curr = prev2 + prev;
        //     prev2 = prev;
        //     prev = curr;
        // }
        // cout<<curr;

        // int i = 10;
        // i = i >> 1;
        // cout<<i;
        // int mat[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
        string s1 = "abcd";
        string s2 = "00";
        //cout<<(s1+s1).find(s2);
        cout<<stoi(s2);

}