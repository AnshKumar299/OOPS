/* Two integers are taken from keyboard. Then perform division operation.
 Write a try block to throw an exception when division by zero occurs and appropriate catch block to handle the exception thrown. */

#include<bits/stdc++.h>
using namespace std;

int divide(int a, int b){
    if(b==0){
        throw -1;
    }else
        return a/b;
}

int main(){
    int a,b;
    cout<<"Enter dividend and divisor: "<<endl;
    cin>>a;
    cin>>b;

    try{
        divide(a,b);
    }
    catch(int num){
        if(num==-1){
            cout<<"CANNOT DIVIDE BY ZERO"<<endl;
        }
    }
}