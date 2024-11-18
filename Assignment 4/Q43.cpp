#include <iostream>
using namespace std;

class Index {
private:
    int value;

public:
    Index(int val = 0) : value(val) {}

    operator int() const {
        return value;
    }

    Index operator+(const Index& other) const {
        return Index(value + other.value);
    }

    Index& operator=(int val) {
        value = val;
        return *this;
    }
};

class Integer {
private:
    Index indexValue;

public:
    Integer() : indexValue(0) {}

    Integer& operator=(const Index& in) {
        indexValue = in;
        return *this;
    }

    int getValue() const {
        return static_cast<int>(indexValue);
    }
};

int main() {
    Index in(4), out(10);
    int x = in;
    int y = in + out;
    in = 2;
    Integer i;
    i = in;

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "in: " << static_cast<int>(in) << endl;
    cout << "i: " << i.getValue() << endl;

    return 0;
}