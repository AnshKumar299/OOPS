/*Write a Garage class that has a Car that is having troubles with its Motor. Use a function-
level try block in the Garage class constructor to catch an exception (thrown from the Motor class) when
its Car object is initialized. Throw a different exception from the body of the Garage constructor s
handler and catch it in main( ).*/

#include<bits/stdc++.h>
using namespace std;

class Motor{
    bool works;
    public:
    Motor(bool v){
        if(v==false){
            throw "Motor not working";
        }
    }
};

class Car{
    public:
    Car(bool b){
        Motor m(b);
    }
};

class Garage{
    int size;
    Car *gar;
    int up;
    public:
    Garage(int a){
        size=a;
        up=0;
    }
    void addcar(bool works){
        if(up==size-1){
            throw -1;
        }
        try{
            *(gar+up)=new Car(works);
            cout<<"Car no. "<<up+1<<" is okay!"<<endl;
            up++;
        }
        catch(const char* s){
            throw 0;
        }
    }
};

int main(){
    try{
    Garage g(4);
    g.addcar(true);
    g.addcar(true);
    g.addcar(false);
    g.addcar(true);
    g.addcar(true);
    g.addcar(true);
    }
    catch(int i){
        switch(i){
            case 0:
            cout<<"Car doesn't work"<<endl;
            break;

            case -1:
            cout<<"Garage full"<<endl;
        }
    }
    catch(...){
        cout<<"Default Exception"<<endl;
    }
}