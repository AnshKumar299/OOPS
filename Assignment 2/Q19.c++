/*19. Write a class Vector for one dimensional array. Write suitable constructor/copy constructor. Also add
member functions for perform basic operations (such as addition, subtraction, equality, less, greater
etc.). Create vectors and check if those operations are working correctly.*/

#include <iostream>
#include <vector>
using namespace std;

class Vectors
{
    int n;
    vector<int> v;

public:
    Vectors()
    {
        this->n = 0;
    }
    Vectors(int x)
    {
        this->n = x;
    }
    void getData()
    {
        cout << "Enter the elements : ";
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
    }
    void addition(Vectors a, Vectors b)
    {
        cout << "Summation Value is : ";
        for (int i = 0; i < a.n; i++)
        {
            cout << a.v[i] + b.v[i] << " ";
        }
        cout << "\n";
    }

    void subtraction(Vectors a, Vectors b)
    {
        cout << "Subtracted Value is : ";
        for (int i = 0; i < a.n; i++)
        {
            cout << a.v[i] - b.v[i] << " ";
        }
        cout << "\n";
    }
    int compare(Vectors a, Vectors b)
    {
        for (int i = 0; i < a.n; i++)
        {
            if (a.v[i] < b.v[i])
                return 1;
            if (a.v[i] < b.v[i])
                return -1;
        }
        return 0;
    }
};
int main()
{
    int n;
    cout << "Enter the size of the arrays : ";
    cin >> n;
    Vectors x(n);
    x.getData();
    Vectors y(n);
    y.getData();
    x.addition(x, y);
    if (x.compare(x, y) == 1)
        cout << "Second vector is greater than first vector\n";
    else if (x.compare(x, y) == -1)
        cout << "First vector is greater than second vector\n";
    else
        cout << "Both the vectors are equal\n";
    return 0;
}