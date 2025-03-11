#include<bits/stdc++.h>
using namespace std;

class Parent {
public: 
    Parent()
    {
        cout<<"Constructor of Parent\n";
    }

    ~Parent()
    {
        cout<<"Destructor of Parent\n";
    }
};

class Child : public Parent {
public:
    Child()
    {
        cout<<"Constructor of Child\n";
    }

    ~Child()
    {
        cout<<"Destructor of Child\n";
    }
};

int main()
{
    Parent p1;
    Child c1;
    return 0;
}