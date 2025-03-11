#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char ch;
    for(int i=0;i<n;i++)
    { 
        for(int j=i;j>=0;j--)
        {
          ch=65+n-1-j;
          cout<<ch<<" ";
        }
        cout<<endl;
    }
}