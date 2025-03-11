#include<bits/stdc++.h>
using namespace std;

class Complex {
private:
    int real;
    int img;

public:
    Complex(int real,int img)
    {
        this->real=real;
        this->img=img;
    }

    Complex operator - (Complex &c2)
    {
        int RealPart=this->real - c2.real;
        int ImgPart=this->img - c2.img;
        Complex c3(RealPart,ImgPart);
        return c3; 
    }

    void showNum()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }

};

int main()
{
    Complex c1(4,5);
    c1.showNum();
    
    Complex c2(3,4);
    c2.showNum();

    Complex c3=c1-c2;
    c3.showNum();
    return 0;
}