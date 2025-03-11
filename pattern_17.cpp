#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sp;char ch;
    for(int i=0;i<n;i++)
    {
        sp=n-i-1;
        for(int j=0;j<sp;j++)//for spaces
        {
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++)
        {
            if(j<=(2*i+1)/2)
            {
                ch=65+j;
                cout<<ch;    
            }
            else
            {
                ch--;
                cout<<ch;
            }
        }
        for(int j=0;j<sp;j++)//for spaces
        {
            cout<<" ";
        }
        cout<<endl;       
    } 
}