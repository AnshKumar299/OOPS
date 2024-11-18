/*Design a class Complex that includes all the necessary functions and operators like =, +, -, *, /.*/

#include<iostream>
#include<cmath>
#include<sstream>
using namespace std;

class Complex{
    int real, imag;
    public:
    Complex(int r = 0, int i = 0){
        real = r;
        imag=i;
    }

    Complex operator+(Complex c){
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    Complex operator-(Complex c){
        Complex temp2;
        temp2.real = real - c.real;
        temp2.imag = imag - c.imag;
        return temp2;
    }

    Complex operator*(Complex c){
        Complex temp3;
        temp3.real= real *c.real - imag*c.imag;
        temp3.imag = real*c.imag + imag*c.real;
        return temp3;

    }

    Complex operator/(Complex c){
        Complex temp4;
        double r = c.real*c.real + c.imag*c.imag;
        temp4.real = (real*c.real + imag*c.imag)/r;
        temp4.imag = (imag*c.real - real*c.imag)/r;
        return temp4;
    }

    friend ostream& operator<<(ostream &os, Complex ob){
        os<<ob.real<<"+"<<ob.imag<<"i";
        return os;
    }
};

int main(){
    Complex z1(4,3);
    Complex z2(1,2);
    cout<<"z1 = "<<z1<<endl;
    cout<<"z2 = "<<z2<<endl;
    cout<<"z1+z2 = "<<z1+z2<<endl;
    cout<<"z1-z2 = "<<z1-z2<<endl;
    cout<<"z1*z2 = "<<z1*z2<<endl;
    cout<<"z1/z2 = "<<z1/z2<<endl;
    return -1;
}