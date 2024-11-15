/*Design a class Stack with necessary exception handling.*/
#include<bits/stdc++.h>
using namespace std;

class Overflow{
    public:
    Overflow(const char* str){
        cout<<"Stack overflow Exception"<<endl;
    }
};
class Underflow{
    public:
    Underflow(const char* str){
       cout<<"Stack Underflow Exception"<<endl;
    }
};
class Stack{
    int *arr;
    int t;
    int size;
    public:
        Stack(int s=100){
            arr=new int[s];
            t=-1;
            size=s;
        }
        

        void push(int a){
            if(t==size-1){
                throw Overflow("stack full");
            }
            else{
                arr[++t]=a;
            }
        }

        int pop(){
            if(t==-1){
                throw Underflow("No elements");
            }
            else{
                int a=arr[t--];
                return a;
            }
        }

        bool empty(){
            if(t==-1){
                return true;
            }
            return false;
        }

        int top(){
            if(t==-1){
                throw Underflow("No elements");
            }
            return arr[t];
        }

};

int main(){
    try{
        Stack ob(4);
        ob.push(6);
        cout<<ob.top()<<endl;
        ob.push(78);
        cout<<ob.top()<<endl;
        ob.push(62);
        cout<<ob.top()<<endl;
        ob.push(9);
        cout<<ob.top()<<endl;

        ob.pop();
        ob.pop();
        ob.pop();
        ob.pop();
        ob.pop();
        cout<<ob.top()<<endl;
    }
    catch(Overflow ob1){
        cout<<"stack full"<<endl;
    }
    catch(Underflow ob2){
        cout<<"Empty stack"<<endl;
    }
    catch(...){
        cout<<"Default exception"<<endl;
    }

}