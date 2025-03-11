#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    bool isPrime = true;
    for(int i=2;i<sqrt(n);i++)//the loop runs for lesser number of times as compared to previous one.....sqrt(n) is done cuz after this the factors starts repeating.....so don't need to check
    {
        if(n%i==0)
        {
            isPrime = false;
            break;
        }
    }
    if(n == 1)
    cout<<"Neither Prime nor Composite"<<endl;
    else if(isPrime)
    cout<<"Prime"<<endl;
    else
    cout<<"Not a Prime"<<endl;

}