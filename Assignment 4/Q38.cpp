/*Implement a class “Quadratic” that represents second-degree polynomial i.e. polynomial of type ax2+bx+c.
The class will require three data members corresponding to a, b and c. Implement the following:
a. A constructor (including a default constructor which create a null polynomial)
b. Overload the addition operator to add two polynomials of degree 2.
c. Overload << and >> operators to print and read polynomials.
d. A function to compute the value of polynomial for a given x.
e. A function to compute roots of the equation ax2+bx+c=0. Remember, root may be a complex number.
You may implement “Complex” class to represent root of the quadratic equation.*/

#include<bits/stdc++.h>
using namespace std;

class Complex {
    public:
    double real, imag;
    Complex(){
        real = 0.0;
        imag = 0.0;
    }
    Complex(double r, double i) {
        real = r;
        imag = i;
    }
    friend ostream& operator<<(ostream &os, Complex ob){
        os<<ob.real<<"+"<<ob.imag<<"i";
        return os;
    }
};

class Quadratic {
    public:
    double a, b, c;
    Quadratic(){
        a = 0.0;
        b = 0.0;
        c = 0.0;
    }
    Quadratic(double A, double B, double C) {
        a = A;
        b = B;
        c = C;
    }

    Quadratic operator+(Quadratic q){
        Quadratic temp;
        temp.a = a + q.a;
        temp.b = b + q.b;
        temp.c = c + q.c;
        return temp;
    }

    friend ostream& operator<<(ostream& os, Quadratic q){
        os << q.a << "x^2 + " << q.b << "x + "<< q.c <<endl;
        return os;
    }

    friend istream& operator>>(istream& is, Quadratic &q){
        cout<<"a  = ";
        is>>q.a;
        cout<<"b  = ";
        is>>q.b;
        cout<<"c  = ";
        is>>q.c;
        return is;
    }

    double evaluate(double t){
        return a*t*t + b*t + c;
    }

    int evaluate(int t){
        return a*t*t + b*t + c;
    }

    void solve(){
        if(b*b-4*a*c<0){
            cout<<"Complex roots: "<<endl;
            double img=sqrt(4*a*c - b*b)/(2*a);
            double rl = -b/(2*a);
            Complex root1(rl,img);
            Complex root2(rl,-img);
            cout<<"root 1 = "<<root1<<endl;
            cout<<"root 2 = "<<root2<<endl;
        }
        else if(b*b-4*a*c>0){
            cout<<"Real and distint roots: "<<endl;
            double rl = (-b + sqrt(b*b - 4*a*c))/(2*a);
            double rl2 = (-b - sqrt(b*b - 4*a*c))/(2*a);
            cout<<"root 1 = "<<rl<<endl;
            cout<<"root 2 = "<<rl2<<endl;
        }
        else{
            cout<<"Real and equal roots: "<<endl;
            double rl = -b/(2*a);
            cout<<"root= "<<rl<<endl;
        }
    }
};

int main(){
    Quadratic q1;
    cout<<"Enter the coefficients of the quadratic equation: "<<endl;
    cin>>q1;
    cout<<"Enter value of x "<<endl;
    int x;
    cin>>x;
    cout<<"Value of q1 at x = "<<x<<" is "<<q1.evaluate(x)<<endl;
    cout<<"solution of q1 is: "<<endl;
    q1.solve();
}