#include<bits/stdc++.h>
using namespace std;

class BankAccount {
    int AccNo;
    float bal=0;
public:
    void setAccNo(int n)
    {
        AccNo = n;
    }
    void getAccNo()
    {
        cout<<"Account Number-"<<AccNo<<endl;
    }
    void deposit(float val)
    { 
        bal += val;
        cout<<"Amount Credited Rs "<<val<<endl;
    }

    void withdraw(int val)
    {
        bal -= val;
        cout<<"Amount Debited Rs "<<val<<endl; 
    }

    void getBalance()
    {
        cout<<"Balance Available Rs "<<bal<<endl;
    }
};

int main()
{
    BankAccount ac1;
    ac1.setAccNo(12345);
    ac1.getAccNo();
    ac1.deposit(1000);
    ac1.withdraw(400);
    ac1.getBalance();

    return 0;
}