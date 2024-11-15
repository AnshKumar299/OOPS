/*16. Write a simple class that represents a class of geometrical points each of which has three coordinates.
The class should have appropriate constructor(s). Also add a member function distance() that calculates
Euclidian distance between two points. Now create two points, find the distance between them and
print it.*/

#include <iostream>
#include <math.h>
using namespace std;

class point
{
public:
    int x, y, z;

    point()
    {

        this->x = 0;
        this->y = 0;
        this->z = 0;
    }

    point(int a, int b, int c)
    {
        this->x = a;
        this->y = b;
        this->z = c;
    }

    void distance(point a, point b)
    {

        double d = sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2) + pow(a.z - b.z, 2));

        cout << "the distance b/w 2 points is :" << d;
    }
};

int main()
{
    point p1 , p3;
    point p2(1, 1, 1);

   
    p3.distance(p1,p2) ;

    return 0;
}
