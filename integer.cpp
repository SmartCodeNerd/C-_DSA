#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    if(num)
    {
        if(num>0)
        cout<<"+ve";
        else
        cout<<"-ve";
    }
    else 
    cout<<"0"<<endl;
    return 0;
}