#include<bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    int temp = n;
    for(int i=0;i<n;i++)
    {
        while(temp>=0)
        {
            for(int i=temp-1;i>=0;i--)
            {
                cout<<i<<" ";
            }
            cout<<endl;
            temp--;
        }
    }
}

int main()
{
    pattern(8);
}