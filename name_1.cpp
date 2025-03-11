//pass by value
#include<iostream>
using namespace std;
void dosomething(string s)
{
    s[3]='z';
    cout<<s<<endl;
}
int main()
{
    string s;
    cin>>s;
    dosomething(s);
    cout<<s<<endl;
    return 0;
}