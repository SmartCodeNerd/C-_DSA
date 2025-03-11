#include<bits/stdc++.h>
using namespace std;

bool CheckClose(string word1,string word2)
{
    int l1=word1.length();
    int l2=word2.length();
    if(l1 != l2)
    return false;
    sort(word1.begin(),word1.end());
    sort(word2.begin(),word2.end());
    if(word1 == word2)
    return true;
    else
    {
        int cnt1[26]={0},cnt2[26]={0};
        for(int i=0;i<l1;i++)
        {
            cnt1[word1[i] - 'a']++;
            cnt2[word2[i] - 'a']++;
        }
        sort(cnt1,cnt1+26);
        sort(cnt2,cnt2+26);
        for(int i=0;i<26;i++)
        {
            if(cnt1[i] != cnt2[i])
            return false;
        }
        return true;
    }
}

int main()
{
    string word1="aa",word2="a";
    cout<<CheckClose(word1,word2);
    return 0;
}