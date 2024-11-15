/*33.Write class definitions for the following class hierarchy

        shape2D
        /     \
    circle   rectangle
*/

#include <iostream>
using namespace std;

class shape2D
{

public:
    virtual void area() = 0;

    virtual void perimeter() = 0;
};

class circle : public shape2D
{

public:
    int radius;

    circle()
    {

        cout << "enter the radius : ";

        int r;

        cin >> r;

        this->radius = r;
    }

    void area()
    {
        cout << "The area is " << 3.14 * radius * radius << "\n";
    }
    void perimeter()
    {
        cout << "The perimeter is " << 2 * 3.14 * radius << "\n";
    }
};

class rectangle : public shape2D
{

public:
    int len, brd;

    rectangle()
    {

        int l, b;

        cout << "Enter the length : ";

        cin >> l;

        this->len = l;

        cout << "Enter the breadth : ";

        cin >> b;

        this->brd = b;
    }

    void area()
    {
        cout << "The area is " << (len * brd) << "\n";
    }
    void perimeter()
    {
        cout << "The perimeter is " << 2 * (len + brd) << "\n";
    }
};

int main()
{
    shape2D *ptr[5];
    circle ob1, ob2, ob3;
    rectangle obj1, obj2;
    ptr[0] = &ob1;
    ptr[1] = &ob2;
    ptr[2] = &ob3;
    ptr[3] = &obj1;
    ptr[4] = &obj2;
    for (int i = 0; i < 5; i++)
    {
        ptr[i]->area();
        ptr[i]->perimeter();
    }

    return 0;
}