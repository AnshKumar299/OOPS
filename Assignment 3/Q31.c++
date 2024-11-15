/* 31.Write a class Person having data member name, age, height etc. Write proper constructors, methods to
get/set them and a method printDetails() that prints all information of a person. Now write another
class Student from Person and add data members roll, year of admission etc. Write constructors,
methods to get/set them and a override printDetails(). Now create a Person and a Student object and
call printDetails() function on them to display their information.
Now Create an array of pointers to Person and store addresses of two Persons and two Students. Call
printDetails() on all elements (a loop may be used). Are you getting output which is supposed to
come? Make printDetails() function virtual in the base class and check the result.*/

#include<iostream>
using namespace std;

class Person
{
    public:
    string name;
    int age,height;

    Person()
    {

    }
    Person(string str,int a, int h)
    {
        this->name = str;
        this->age = a;
        this->height = h;
    }

    void printDetails()
    {
        cout << "Name : " << name<< "\n";
        cout << "Age : " << age<< "\n";
        cout << "Height :" << height<< "\n";
    }
};


class Student : public Person
{
    private:
    int roll, yearofadmission;
    public:
    Student()
    {

    }

    Student(int r, int y)
    {
        this->roll = r;
        this->yearofadmission = y;
    }

    void printDetails()
    {
        cout << "Name : " << name << "\n";
        cout << "Age : " << age<< "\n";
        cout << "Height :" << height<< "\n";
        cout << "Roll : " << roll<< "\n";
        cout << "Yead of Admission : " << yearofadmission<< "\n";
    }
};

int main()
{
    Person ob("Manas",20,165);
    cout << "Information in class Person : \n";
    ob.printDetails();
    Student obj(25,2021);
    cout << "Information in class Student : \n";
    obj.printDetails();
    return 0;
}

