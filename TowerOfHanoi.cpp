#include<iostream>
using namespace std;

void Hanoi(int n,int s,int h,int d)
{
    if(n == 1)
    {
        cout<<"Shift from "<<s<<" to "<<d<<endl;
        return;
    }
        Hanoi(n-1,s,d,h);
        //Move the last disk
        cout<<"Shift from "<<s<<" to "<<d<<endl;
        Hanoi(n-1,h,s,d);
}

int main()
{
    int n = 3;
    Hanoi(n,1,2,3);    
}