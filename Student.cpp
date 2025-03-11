#include<bits/stdc++.h>
using namespace std;

class Student {
    string name;
    float cgpa;

public:

    void percentage(){
        cout<<cgpa * 10 <<"% \n";
    }

    //Setters

    // void setName(string nameval)
    // {
    //     name=nameval;
    // }

    // void setCgpa(float cgpaval)
    // {
    //     cgpa=cgpaval;
    // }

    //Contructors

    //Non-Parameterised

    Student()
    {
        cout<<"Constructor is invoked->Object is created\n";
    }

    //Parameterised

    Student(string name,float cgpa)
    {
        this->name=name;
        this->cgpa=cgpa;
    }

    //Getters

    string getName()
    {
        return name;
    }

    float getCgpa()
    {
        return cgpa;
    }

};


class User
{
    int id;
    string password;

public:
    string username;

    //Constructor

    User(int id)
    {
        this->id=id;
    }

    //Setter

    void setPassword(string val)
    {
        password=val;
    }

    //Getter

    string getPassword()
    {
        return password;
    }

    int getId()
    {
        return id;
    }

    //Creating Custom Constructor
    User(User &Og)
    {
        cout<<"Copying from custom constructor\n";
        id=Og.id;
        password=Og.password;
    }
};


class Car{
public:
    string name;
    string color;
    int *mileage;

    Car(string name,string color,int val)
    {
        cout<<"Constructor Invoked"<<endl;
        this->name=name;
        this->color=color;
        mileage = new int;//Dynamic Allocation
        *mileage=val;
    }


    //Shallow Copy
    // Car(Car &Original)
    // {
    //     cout<<"Copying Objects\n";
    //     name=Original.name;
    //     color=Original.color;
    //     mileage=Original.mileage;
    // }

    //Deep Copy
    Car(Car &Og)
    {
        name=Og.name;
        color=Og.color;
        mileage = new int;
        *mileage=*Og.mileage;
    }

    ~Car(){
        cout<<"Deleting Objects\n";
        if(mileage != NULL)
        {
            delete mileage;
            mileage =NULL;
        }
    }
};


int main()
{
    Student s2;
    Student s1("Gulshan",7.88);
    // s1.setName("Gulshan");
    // s1.setCgpa(7.88);

    User u1(12345);
    u1.setPassword("Mummy@54321");
    cout<<u1.getId()<<endl;
    cout<<u1.getPassword()<<endl;
    User u2(u1);

    cout<<u2.getId()<<endl;
    cout<<u2.getPassword()<<endl;

    // cout<< s1.getName() <<endl;
    // cout<< s1.getCgpa() <<endl;

    Car c1("G-Wagon","Black",15);
    // Car c2(c1);

    // *c1.mileage=20;
    // cout<<*c2.mileage<<" "<<*c1.mileage<<endl;


    cout<<c1.name<<endl;
    cout<<c1.color<<endl;
    cout<<*c1.mileage<<endl;
    
    return 0;
}
