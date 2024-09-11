#include <iostream>
#include <string>
using namespace std;

class LibraryUser
{
protected:
    string name;
    int id;
    string contactDetails;

public:
    LibraryUser(string name, int id, string contactDetails)
        : name(name), id(id), contactDetails(contactDetails) {}

    void setName(string name) { this->name = name; }
    string getName() { return this->name; }

    void setId(int id) { this->id = id; }
    int getId() { return this->id; }

    void setContactDetails(string contactDetails) { this->contactDetails = contactDetails; }
    string getContactDetails() { return this->contactDetails; }

    virtual void Display()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Contact Details: " << contactDetails << endl;
    }
};

class Student : public LibraryUser
{
private:
    int gradeLevel;

public:
    Student(string name, int id, string contactDetails, int gradeLevel)
        : LibraryUser(name, id, contactDetails), gradeLevel(gradeLevel) {}

    void setGradeLevel(int gradeLevel) { this->gradeLevel = gradeLevel; }
    int getGradeLevel() { return this->gradeLevel; }

    void Display() override
    {
        LibraryUser::Display();
        cout << "Grade Level: " << gradeLevel << endl << endl;
    }
};

class Teacher : public LibraryUser
{
private:
    string department;

public:
    Teacher(string name, int id, string contactDetails, string department)
        : LibraryUser(name, id, contactDetails), department(department) {}

    void setDepartment(string department) { this->department = department; }
    string getDepartment() { return this->department; }

    void Display() override
    {
        LibraryUser::Display();
        cout << "Department: " << department << endl << endl;
    }
};

int main()
{
    Student obito("Obito Uchiha", 1001, "obito.uchiha@smpk.com", 12);
    Teacher minato("Minato Namikaze", 2001, "minato.namikaze@smpk.com", "Ninjutsu");

    cout << "Student Information:" << endl;
    obito.Display();

    cout << "Teacher Information:" << endl;
    minato.Display();

    return 0;
}
