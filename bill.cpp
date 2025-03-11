#include<iostream>
using namespace std;
int main()
{
    float pen,pencil,eraser;
    cout<<"Enter the prices of the items\n";
    cin>>pen>>pencil>>eraser;
    float price=pen+pencil+eraser;
    float final_price=price+ 0.18*price;
    cout<<final_price;
}