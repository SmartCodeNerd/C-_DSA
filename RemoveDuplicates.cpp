#include<bits/stdc++.h>
using namespace std;

string RemoveDuplicates(string str,string ans,int i)
{
    if(i < str.length())
    {
        if(ans.find(str[i]) == -1)
        // strcat(ans,str[i]);
        ans += str[i];
        return RemoveDuplicates(str,ans,i+1);
    }
    return ans;
}

int main()
{
    string str="apnnacollege";
    string ans="";
    cout<<RemoveDuplicates(str,ans,0);
    return 0;
}