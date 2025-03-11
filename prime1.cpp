#include<iostream>
using namespace std;

int main()
{
    int n,fac=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            fac++;
        }
    }
    if(fac == 1)
    cout<<"Neither Prime nor Composite"<<endl;
    else if(fac == 2)
    cout<<"Prime"<<endl;
    else
    cout<<"Not Prime"<<endl;
}