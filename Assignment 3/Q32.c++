/*32.Write a class Employee having data member name, salary etc. Write proper constructors, methods to
get/set them and a virtual method printDetails() that prints all information of a person. Now write two
classes Manager and Clerk from Employee. Add ‘type’ and ‘allowance’ in the manager and Clerk
respectively. Write constructors, methods to get/set them and a override printDetails(). Now create a
Manager and a Clerk object and call printDetails() function on them to display their information.
Now Create an array of pointers to Employee and store addresses of two Employee, two Managers and
two Clerks. Call printDetails() on all elements (a loop may be used). Also find the total salary drawn
by all employees.*/

#include<iostream>
using namespace std;

class Employee
{
    public:
    string name;
    int salary;
    Employee()
    {
        cout << "Enter the name : \n";
        string s;
        cin >> s;
        cout << "Enter the salary : \n";
        int sal;
        cin >> sal;
        this->name = s;
        this->salary = sal;
    }

    void printDetails()
    {
        cout << "Name : " << name << "\n";
        cout << "Salary : " << salary << "\n";
    }

};

class Manager : public Employee
{
    public:
    string type;
    Manager()
    {
        cout << "Enter the type of manager : ";
        string s;
        cin >> s;
        this->type = s;
    }

    void printDetails()
    {
        cout << "Name : " << name << "\n";
        cout << "Salary : " << salary << "\n";
        cout << "Type : " << type << "\n";
    }

};

class Clerk : public Employee
{
    public:
    int allowance;
    Clerk()
    {
        cout << "Enter the allowance : ";
        int n;
        cin >> n;
        this->allowance = n;
    }

    void printDetails()
    {
        cout << "Name : " << name << "\n";
        cout << "Salary : " << salary << "\n";
        cout << "Allowance : " << allowance << "\n";
    }
 
};
    int main()
{
    Manager ob;
    Clerk obj;
    ob.printDetails();
    obj.printDetails();
    return 0;
}