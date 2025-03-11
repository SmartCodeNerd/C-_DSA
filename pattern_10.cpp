#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int stars=i+1;
        if(i>n/2)
        stars=n-i;
        for(int j=0;j<stars;j++)
        cout<<"*";
        cout<<endl;  
    }
}