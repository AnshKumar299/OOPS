#include <iostream>
using namespace std;

class INT {
    int i;
public:
    INT(int a) : i(a) {}

    INT(const INT& other) : i(other.i) {}

    operator int(){
        return i;
    }
    INT& operator=(const INT& other) {
        if (this != &other) {
            i = other.i;
        }
        return *this;
    }

    INT operator++(int) {
        INT temp = *this; 
        ++i;              
        return temp;    
    }

    INT& operator++() {
        ++i;             
        return *this;   
    }

    INT& operator+=(const INT& other) {
        i += other.i;   
        return *this;    
    }

    void print() const {
        cout << "Value: " << i << endl;
    }
};

int main() {
    int x = 3;
    INT y = x;     
    y++ = ++y;    
    x = y;      
    cout << "x: " << x << endl; 
    return 0;
}