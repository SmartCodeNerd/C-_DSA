#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter your marks\n";
    cin>>x;
    if(x<25)
    cout<<"F";
    else if(x<=44)
    cout<<"E";
    else if(x<=49)
    cout<<"D";
    else if(x<=59)
    cout<<"C";
    else if(x<=79)
    cout<<"B";
    else if(x<=100)
    cout<<"A";
}