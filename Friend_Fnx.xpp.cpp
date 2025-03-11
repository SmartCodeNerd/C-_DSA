#include<bits/stdc++.h>
using namespace std;

class A {
public:
    string secret="123";
    // friend class B;
    // friend void RevealSecret(A &obj);

};

class B {
public:
    void ShowSecret(A &obj)
    {
        cout<<obj.secret<<endl;
    }
};

void RevealSecret(A &obj)
{ 
    cout<<obj.secret<<endl;
}

int main()
{
    A a1;
    B b1;
    b1.ShowSecret(a1);
    RevealSecret(a1);
    return 0;
}