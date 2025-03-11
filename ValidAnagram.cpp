#include<bits/stdc++.h>
using namespace std;

int CheckAnagram(string str1,string str2)
{
    string temp;
    temp=str1;///abc
    for(int i=0;i<str2.length();i++)
    {
        int idx=temp.find(str2[i]);
        if(str1.length() != str2.length())
        return -1;
        else if(idx == -1)
        {
            return -1;
        }
        else
        {
            temp[idx] = ' ';
        }
    }
    return 1;
}

int main()
{
    string str1="abc";
    string str2="ab ";
    cout<<CheckAnagram(str1,str2);
    return 0;
}