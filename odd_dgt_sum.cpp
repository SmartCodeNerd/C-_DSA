#include<iostream>
using namespace std;

int main()
{
    int n,temp,dgt,sum=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    temp=n;
    while(temp)
    {
        dgt=temp%10;
        if(dgt %2!= 0)
        sum+=dgt;
        temp/=10;
    }
    cout<<"The sum of the odd digits in a number is "<<sum;
    return 0;
}