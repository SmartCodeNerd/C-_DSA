#include<bits/stdc++.h>
using namespace std;

class Person {
protected:
    string name;
    int age;
public: 
    Person(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
};

class Student : public Person {
public:
    int studentId;

    Student(string name,int age,int id):Person(name,age)//,studentId(id)
    {
        this->studentId=id;
    }

    void getInfo()
    { 
        cout<<"Name-"<<name<<endl;
        cout<<"Age-"<<age<<endl;
        cout<<"Id-"<<studentId<<endl;
    }
};

int main()
{
    Student student("Goldie",21,12345);
    student.getInfo();
}
