/* Write a C++ program to demonstrate the use of try, catch block with the argument as an integer and string using multiple catch blocks */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=45,b=6;
    try{
        cout<<"a = "<<a<<" b= "<<b<<endl;
        if(b==0){
            throw 0;
        }
        cout<<"a/b = "<<a/b<<endl;
        if(a%b!=0){
            throw string("rem");
        }
    }
    catch(int a){
        cout<<"CANNOT DIVIDE BY ZERO"<<endl;
    }
    catch(string r){
        cout<<"a%b = "<<a%b<<endl;
    }
}