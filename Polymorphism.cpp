#include<bits/stdc++.h>
using namespace std;

// class Print{
// public:

//        int show(int x)
//        {
//         cout<<x<<endl;
//         return 1;
//        }

//        void show(int str)
//        {
//         cout<<str<<endl;
//         return 1.0;
//        }
// };


class Parent {
public:
       virtual void hello()
       {
        cout<<"Hello Parent\n";
       }
};

class Child : public Parent {
public:
       void hello()
       {
        cout<<"Hello Child\n";
       }
};

int main()
{
//    Print obj1;
//    cout<<obj1.show(25);
//    cout<<obj1.show(27);
      Child c1;
      Parent *ptr;
      ptr=&c1;
      ptr->hello();
      c1.hello();
   return 0;
}