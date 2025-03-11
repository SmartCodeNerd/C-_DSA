#include<bits/stdc++.h>
using namespace std;

class Complex{
    int real;
    int img;

public:
    Complex(int real,int img)
    {
       this->real=real;
       this->img=img;
    }

    void showNum()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
    
    //Operator Overloading
    Complex operator + (Complex &c2)
    {
        int RealPart=this->real + c2.real;
        int ImgPart=this->img + c2.img;
        Complex c3(RealPart,ImgPart);
        return c3;
    }

    Complex operator - (Complex &c2)
    {
        int RealPart=this->real - c2.real;
        int ImgPart=this->img - c2.img;
        Complex c3(RealPart,ImgPart);
        return c3;
    }

    Complex operator * (Complex &c2)
    {
        int RealPart=this->real * c2.real - this->img * c2.img;
        int ImgPart=this->real * c2.img + this->img * c2.real;
        Complex c3(RealPart,ImgPart);
        return c3;
    }

};

int main()
{
    Complex c1(4,5);
    Complex c2(3,4);

    c1.showNum();
    c2.showNum();

    Complex c3=c1 + c2;
    c3.showNum();

    Complex c4=c1-c2;
    c4.showNum();
    
    Complex c5=c1*c2;
    c5.showNum();
    return 0;
}