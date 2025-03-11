#include<iostream>
using namespace std;

int main()
{
    int n=5,nsp=n-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=nsp;j++)//For spaces
        {
            cout<<" ";
        }
        int val=i,flag=0;
        for(int k=1;k<=2*i-1;k++)//For numbers
        {
            if(flag == 0)
            cout<<val--;
            else
            cout<<val++;
            if(val == 0)
            {
                val+=2;
                flag=1;
            }    
        }
        nsp--;
        cout<<endl;
    }
}