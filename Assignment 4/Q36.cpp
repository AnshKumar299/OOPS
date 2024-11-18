/*Write a class “Point” which stores coordinates in (x, y) form. Define necessary constructor, destructor and other reader/writer functions.
 Now overload ‘-’ operator to calculate the distance between two points*/

#include<iostream>
#include<cmath>
#include<sstream>
using namespace std;


class Point{
    int x,y;
    public:
    Point(int a=0,int b=0){
        x=a;
        y=b;
    }
    ~Point(){
        cout<<"Point object destroyed"<<endl;
    }

    void knowPoint(){
        cout<<" Point is at ("<<x<<","<<y<<")"<<endl;
    }

    void setPoint(int a,int b){
        x=a;
        y=b;
    }

    Point operator-(Point p){
        Point ppp;
        ppp.x=x-p.x;
        ppp.y=y-p.y;
        return ppp;
    }

    friend ostream& operator<<(ostream &os, Point p){
        os<<"("<<p.x<<","<<p.y<<")";
        return os;
    }
};

int main(){
    Point p1(5,6);
    Point p2(3,4);
    cout<<"P1 ";
    p1.knowPoint();
    cout<<"P2 ";
    p2.knowPoint();

    Point p3=p1-p2;
    cout<<"P1 - P2 => "<<p3<<endl;
}