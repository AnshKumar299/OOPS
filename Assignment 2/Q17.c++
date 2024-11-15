/*17. Write a class for the geometrical shape rectangle. Write suitable constructors and member functions.
Add a member function area() that calculates the area of a rectangle. Create 4 rectangles and print their
respective area.*/

#include <iostream>
using namespace std;

class rectangle
{

    int len, brd;

public:
    rectangle()
    {

        this->len = 0;
        this->brd = 0;
    }

    rectangle(int a, int b)
    {

        this->len = a;
        this->brd = b;
    }

    void area()
    {

        int area = len * brd;

        cout << "the area of the given rectangle is : " << area << endl;
    }
};

int main()
{

    rectangle r1(2, 3);
    rectangle r2(4, 3);
    rectangle r3(2, 8);
    rectangle r4(7, 3);

    r1.area();
    r2.area();
    r3.area();
    r4.area();

    return 0;
}