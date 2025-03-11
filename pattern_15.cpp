#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char ch;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            ch=65+j;
            cout<<ch;
        }
        cout<<endl;
    }
}