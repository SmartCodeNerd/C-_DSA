#include<bits/stdc++.h>
using namespace std;

void Count(string str)
{
    int cnt=0;
    for(char ch:str)
    {
        if(tolower(ch) == ch)
        {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            cnt++;
        }
    }
    cout<<cnt<<endl;
}

int main()
{
    string str="hEllO world";
    Count(str);
    return 0;
}