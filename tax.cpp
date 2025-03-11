#include<iostream>
using namespace std;

int main()
{
    int inc;
    cout<<"Enter the income\n";
    cin>>inc;
    if(inc<5)
    cout<<"0% Tax"<<endl;
    else if(inc<10)
    cout<<"20% Tax"<<endl;
    else
    cout<<"30% Tax"<<endl;
}