#include<bits/stdc++.h>
using namespace std;

class Animal{
public:
       void eat()
       {
        cout<<"Eats\n";
       }

       void breathe()
       {
        cout<<"Breathes\n";
       }
};

class Mammal : public Animal{
public:
       string bloodType;

       Mammal()
       {
        bloodType="Warm";
       }
};

class Dog :public Mammal {
public:
       void tailWag(){
        cout<<"Dogs Wag their Tail"<<endl;
       }

};

class Teacher{
public:
       int salary;
       string subject;
};

class Student{
public:
       int rollno;
       float cgpa;
};

class TA : public Teacher,public Student{
public:
    string name;
};

int main()
{
    // Dog d1;
    // d1.eat();
    // cout<<d1.bloodType<<endl;   
    // d1.breathe();
    TA ta1;
    ta1.rollno=27;
    ta1.cgpa=7.88;
    ta1.salary=25000;
    ta1.subject="DBMS";
    ta1.name="SP";

    cout<<ta1.rollno<<endl;
    cout<<ta1.cgpa<<endl;
    cout<<ta1.salary<<endl;
    cout<<ta1.subject<<endl;
    cout<<ta1.name<<endl;
}