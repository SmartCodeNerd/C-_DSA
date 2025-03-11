#include<bits/stdc++.h>
using namespace std;

class Example {
public:
    Example()
    {
        cout<<"Constructor Called\n";
    }

    ~Example()
    {
        cout<<"Destructor Called\n";
    }

}; 

// Example::x=0;

void counter1()
{
    int count =0;
    count++;
    cout<<count<<endl;
}

void counter2()
{
    static int count;
    count++;
    cout<<count<<endl;
}

// int Example::x=0;

int main()
{
    // counter1();
    // counter1();
    // counter1();
    // cout<<"\n";
    // counter2();
    // counter2();

    // counter2();
    // Example eg1;
    // Example eg2;
    // Example eg3;
    // cout<<eg1.x++<<endl;
    // cout<<eg2.x++<<endl;
    // cout<<eg3.x++<<endl;

    int a=0;
    if(a == 0)
    {
        static Example eg1;
    }
    cout<<"Code Ends here\n";
    return 0;
}