// 6. Write a program where each object of class Employee has a constant employee ID
// (assigned during construction) and a static member totalEmployees that tracks the number
// of employee objects created. Use a friend function to display the details of any Employee
// object, including the employee ID, and the total number of employees.
// Requirements:
// 1. The employee ID must be a const member initialized in the constructor.
// 2. The totalEmployees member should be static and updated with each new object
// creation.
// 3. Use a friend function to display an employee’s details and the total number of
// employees.
// 4. Use the scope resolution operator to access the static member in the main function.
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
class Employee
{
    static int countEmployee;
    int id;
    string name;

public:
    Employee(string name)
    {
        this->id = ++countEmployee;
        this->name = name;
    }
    friend void display(Employee const);
};
void display(Employee const A)
{
    cout << A.id << "\t" << A.name << endl;
}
int Employee ::countEmployee = 0;
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    Employee a("obito uchiha");
    display(a);
    Employee b("Rin nohara");
    display(b);
    Employee c("kakashi hatake");
    display(c);
    return EXIT_SUCCESS;
}