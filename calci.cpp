#include<iostream>
using namespace std;

int main()
{
    char ch;
    int a,b;
    cout<<"Enter the numbers"<<endl;
    cin>>a>>b;
    cout<<"Enter your choice"<<endl;
    cin>>ch;
    switch(ch)
    {
        case '+':cout<<a+b;
                break;
        case '-':cout<<a-b;
                break;
        case '*':cout<<a*b;
                break;
        case '/':cout<<(float)a/b;
                break;
        case '%':cout<<a%b;
                break;
        default:cout<<"Invalid"<<endl;
    }
}