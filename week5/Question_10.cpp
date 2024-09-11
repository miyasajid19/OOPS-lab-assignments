#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    string address;

public:
    Person(string name, string address) : name(name), address(address) {}

    void setName(string name) { this->name = name; }
    string getName() { return this->name; }

    void setAddress(string address) { this->address = address; }
    string getAddress() { return this->address; }

    virtual void Display()
    {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
    }
};

class Staff : virtual public Person
{
protected:
    string employee_id;
    string department;

public:
    Staff(string name, string address, string employee_id, string department)
        : Person(name, address), employee_id(employee_id), department(department) {}

    void setEmployeeID(string employee_id) { this->employee_id = employee_id; }
    string getEmployeeID() { return this->employee_id; }

    void setDepartment(string department) { this->department = department; }
    string getDepartment() { return this->department; }

    void Display() override
    {
        Person::Display();
        cout << "Employee ID: " << employee_id << endl;
        cout << "Department: " << department << endl;
    }
};

class Student : virtual public Person
{
protected:
    string student_id;
    string grade;

public:
    Student(string name, string address, string student_id, string grade)
        : Person(name, address), student_id(student_id), grade(grade) {}

    void setStudentID(string student_id) { this->student_id = student_id; }
    string getStudentID() { return this->student_id; }

    void setGrade(string grade) { this->grade = grade; }
    string getGrade() { return this->grade; }

    void Display() override
    {
        Person::Display();
        cout << "Student ID: " << student_id << endl;
        cout << "Grade: " << grade << endl;
    }
};

class TeachingAssistant : public Staff, public Student
{
public:
    TeachingAssistant(string name, string address, string employee_id, string department, string student_id, string grade)
        : Person(name, address), Staff(name, address, employee_id, department), Student(name, address, student_id, grade) {}

    void Display() override
    {
        Person::Display();
        cout << "Employee ID: " << employee_id << endl;
        cout << "Department: " << department << endl;
        cout << "Student ID: " << student_id << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main()
{
    Staff staff("Minato Namikaze", "Hidden Leaf Village", "STF1001", "Ninjutsu Department");
    cout << "Staff Information:" << endl;
    staff.Display();
    cout << endl;

    Student student("Obito Uchiha", "Hidden Leaf Village", "STU2002", "A+");
    cout << "Student Information:" << endl;
    student.Display();
    cout << endl;

    TeachingAssistant ta("Kakashi Hatake", "Hidden Leaf Village", "STF1002", "Tactical Department", "STU3003", "A");
    cout << "Teaching Assistant Information:" << endl;
    ta.Display();

    return 0;
}
