#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

struct Student
{
    string Name;
    int roll_no;
    string Degree;
    string Hostel;
    float cgpa;

    void addDetails(string name, int roll, string degree, string hostel, float gpa)
    {
        this->Name = name;
        this->roll_no = roll;
        this->Degree = degree;
        this->Hostel = hostel;
        this->cgpa = gpa;
    }

    void addDetails()
    {
        cout << "Enter student details:" << endl;
        cout << "Name: ";
        getline(cin, Name);
        cout << "Roll No.: ";
        cin >> roll_no;
        cin.ignore();
        cout << "Degree: ";
        getline(cin, Degree);
        cout << "Hostel: ";
        getline(cin, Hostel);
        cout << "CGPA: ";
        cin >> cgpa;
        cin.ignore();
    }

    void updateDetails()
    {
        cout << "Update student details:" << endl;
        cout << "Name: ";
        getline(cin, Name);
        cout << "Roll No.: ";
        cin >> roll_no;
        cin.ignore();
        cout << "Degree: ";
        getline(cin, Degree);
        cout << "Hostel: ";
        getline(cin, Hostel);
        cout << "CGPA: ";
        cin >> cgpa;
        cin.ignore();
    }

    void updateCGPA(float newCGPA)
    {
        this->cgpa = newCGPA;
    }

    void updateCGPA()
    {
        cout << "Enter new CGPA: ";
        cin >> cgpa;
        cin.ignore();
    }

    void updateHostel(string newHostel)
    {
        this->Hostel = newHostel;
    }

    void updateHostel()
    {
        cout << "Enter new Hostel: ";
        getline(cin, Hostel);
    }

    void displayDetails()
    {
        cout << "Student Details:" << endl;
        cout << "Name: " << Name << endl;
        cout << "Roll No.: " << roll_no << endl;
        cout << "Degree: " << Degree << endl;
        cout << "Hostel: " << Hostel << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main()
{
#ifndef JUDGE_ONLINE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    Student student1;
    cout << "Enter details for Student 1:" << endl;
    string name, hostel, degree;
    int roll;
    float gpa;
    cout << "Name: ";
    cin >> ws;
    getline(cin, name);
    cout << "Roll No.: ";
    cin >> roll;
    cout << "Degree: ";
    cin >> ws;
    getline(cin, degree);
    cout << "Hostel: ";
    getline(cin, hostel);
    cout << "CGPA: ";
    cin >> gpa;

    student1.addDetails(name, roll, degree, hostel, gpa);
    cout << "\nStudent 1 Details:" << endl;
    student1.displayDetails();

    cout << "\nUpdate details for Student 1:" << endl;
    student1.updateDetails();
    cout << "\nUpdated Student 1 Details:" << endl;
    student1.displayDetails();

    Student student2;
    cout << "\nEnter details for Student 2:" << endl;
    student2.addDetails();
    cout << "\nStudent 2 Details:" << endl;
    student2.displayDetails();

    cout << "\nEnter new CGPA for Student 2: ";
    cin >> gpa;
    student2.updateCGPA(gpa);
    cout << "\nUpdated Student 2 Details:" << endl;
    student2.displayDetails();

    cout << "\nEnter new CGPA for Student 2 using input method:" << endl;
    student2.updateCGPA();
    cout << "\nUpdated Student 2 Details:" << endl;
    student2.displayDetails();

    cout << "\nEnter new hostel for Student 2: ";
    cin >> ws;
    getline(cin, hostel);
    student2.updateHostel(hostel);
    cout << "\nUpdated Student 2 Details:" << endl;
    student2.displayDetails();

    cout << "\nEnter new hostel for Student 2 using input method:" << endl;
    student2.updateHostel();
    cout << "\nUpdated Student 2 Details:" << endl;
    student2.displayDetails();

    return EXIT_SUCCESS;
}
