#include<bits/stdc++.h>
using namespace std;

class Shape {
public:
    virtual void draw()=0;//Pure Virtual Function
};

class Circle : public Shape{
public:
    void draw()
    {
        cout<<"Circle Drawn\n";
    }
};

class Square : public Shape{
public:
    void draw()
    {
        cout<<"Square Drawn\n";
    }
};

int main()
{
    Circle c1;
    c1.draw();

    Square s1;
    s1.draw();

    return 0;   
}