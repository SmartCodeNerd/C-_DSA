#include<bits/stdc++.h>
using namespace std;

int Palindrome(char str[],int n)
{
    int st=0,end=n-1;
    while(st<end)
    {
        if(str[st] == str[end])
        {
            st++;
            end--;
        }
        else
        return 0;
    }
    return 1; 
}

int main()
{
    char str[]="apple";
    int res=Palindrome(str,strlen(str));
    if(res == 1)
    cout<<"Valid Palindrome\n";
    else
    cout<<"Not a Valid Palindrome\n";
    return 0;
}