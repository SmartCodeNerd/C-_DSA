#include<iostream>
using namespace std;

int main()
{
    int n,temp,dgt,rev=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    temp=n;
    while(temp)
    {
        dgt=temp%10;
        rev = rev * 10 + dgt;
        temp/=10;
    }
    cout<<"The reverse of the number is "<<rev;
    return 0;
}