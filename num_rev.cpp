#include<iostream>
using namespace std;

int main()
{
    int n,temp,dgt;
    cout<<"Enter the number"<<endl;
    cin>>n;
    temp=n;
    while(temp)
    {
        dgt=temp%10;
        cout<<dgt;
        temp/=10;
    }
    return 0;
}