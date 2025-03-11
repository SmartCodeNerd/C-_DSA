#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x<18)
    cout<<"You are not eligible for job\n";
    else if(x<=57)
    {
        cout<<"Eligible for job";
        if(x>=55)
        cout<<",but retirement soon\n";
    }
    else
    cout<<"Retirement time\n";
    return 0;
}