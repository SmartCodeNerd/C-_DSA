#include<iostream>
using namespace std;

void DecPrint(int n)
{
    if(n == 0)
    return;
    
    DecPrint(n-1);
    cout<<n<<endl;
}

int main()
{
    DecPrint(10);
}