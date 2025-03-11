#include<iostream>
using namespace std;

int reverse(int n){
    int rev=0,dgt;
    while(n)
    {
        dgt=n%10;
        rev=rev*10+dgt;
        n/=10;
    }
    return rev;
}
void palindrome(int n)
{
    if(n == reverse(n))
    cout<<"Palindrome\n";
    else
    cout<<"Not a Palindrome\n";
}

int main()
{
    int n=131;
    palindrome(n);
    return 0;
}