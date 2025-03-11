#include<iostream>
using namespace std;
int main()
{
    string s="Gulshan";
    int len=s.size();
    s[len-1]='f';
    cout<<s;
}