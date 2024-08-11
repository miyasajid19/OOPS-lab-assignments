#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Student
{
private:
    string password;
    void displayPassword();

protected:
    float gpa;
    void displayGPA();

public:
    string name;

    Student() {}

    Student(string name, string password, float gpa)
    {
        this->name = name;
        this->password = password;
        this->gpa = gpa;
    }

    void setPassword(string password);
    void setGPA(float gpa);
    void display();
    void showGPA();
    void showPassword();
};

void Student::setPassword(string password)
{
    this->password = password;
}

void Student::setGPA(float gpa)
{
    this->gpa = gpa;
}

void Student::display()
{
    cout << this->name << " " << this->password << " " << this->gpa << endl;
}

void Student::displayGPA()
{
    cout << gpa << endl;
}

void Student::showGPA()
{
    displayGPA();
}

void Student::displayPassword()
{
    cout << password << endl;
}

void Student::showPassword()
{
    displayPassword();
}

int main()
{
#ifndef JUDGE_ONLINE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    Student s;
    s.name = "sajid miya";
    s.setPassword("sajidmiya123");
    s.setGPA(9.55);
    s.display();

    Student s2("Obito Uchiha", "uchihaObito", 10);
    cout << s2.name << endl;
    s2.showGPA();
    s2.showPassword();
    return EXIT_SUCCESS;
}
