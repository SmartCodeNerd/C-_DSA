#include<iostream>
using namespace std;
int main()
{
    int n;
    char ch;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            //int t=65+j;
            ch=65+j;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}