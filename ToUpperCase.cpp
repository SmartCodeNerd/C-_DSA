#include<bits/stdc++.h>
using namespace std;

void ToUpperCase(char word[],int n)
{
    for(int i=0;i<n;i++)
    {
        char ch=word[i];
        if(ch >= 'a' && ch <= 'z')
            word[i] = ch - 'a' + 'A';
    }
    cout<<word<<endl;
}

void ToLowerCase(char word[],int n)
{
    for(int i=0;i<n;i++)
    {
        char ch=word[i];
        if(ch >= 'A' && ch <= 'Z')
            word[i] = ch - 'A' + 'a';
    }
    cout<<word;
}

int main()
{
    char word[]="ApPle";
    //ToUpperCase(word,strlen(word));
    ToLowerCase(word,strlen(word));
    return 0;
}