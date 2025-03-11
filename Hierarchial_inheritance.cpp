#include<bits/stdc++.h>
using namespace std;

class Animal{
public:
      void eat()
      {
        cout<<"Eats"<<endl;
      }

      void breathe()
      {
        cout<<"Breathes"<<endl;
      }
};

class Bird:public Animal{
public:
       void fly()
       {
        cout<<"Flies"<<endl;
       }
};

class Fish:public Animal{
public:
       void swim()
       {
        cout<<"Swimming"<<endl;
       }
};

class Mammal:public Animal{
public:
       void walk()
       {
        cout<<"Walking"<<endl;
       }
};

int main()
{
    Bird b1;
    Fish f1;
    Mammal m1;
    b1.eat();
    b1.breathe();
    b1.fly();

    f1.eat();
    f1.breathe();
    f1.swim();

    m1.eat();
    m1.breathe();
    m1.walk();
    return 0;
}