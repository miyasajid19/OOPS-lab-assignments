// Write a program where Person is the base class with a protected name member. The class
// Student inherits from Person, and Graduate inherits from Student. A FriendClass should be
// a friend of Graduate and have access to its members. Implement constant member functions
// to display the values of members without modifying them, and a copy constructor to initialize
// objects.
// Requirements:
// 1. Create a multilevel inheritance structure with Person, Student, and Graduate.
// 2. Use constant member functions in Graduate to display protected members.
// 3. Implement a copy constructor for each class.
// 4. Use a friend class to access and display the values of the Graduate object.
#include <iostream>
#include <cstdlib>
using namespace std;
class Person
{
protected:
    string name;

public:
    Person(string name)
    {
        this->name = name;
    }
};
class Student : public Person
{
public:
    Student(string name) : Person(name) {}
};
class Graduates : public Student
{
public:
    Graduates(string name) : Student(name) {}
    friend void display(Graduates const);
};
void display(Graduates const A)
{
    cout << A.name << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    Graduates grad1("Obito Uchiha");
    display(grad1);
    Graduates grad2("Kakashi Hatake");
    display(grad2);
    Graduates grad3("Rin Nohara");
    display(grad3);

    return EXIT_SUCCESS;
}