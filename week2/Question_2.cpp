#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Student
{
private:
    int roll_no;
    float cgpa;
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
    void displayDetails()
    {
        cout << "Student Details:" << endl;
        cout << "Name: " << Name << endl;
        cout << "Roll No.: " << roll_no << endl;
        cout << "Degree: " << Degree << endl;
        cout << "Hostel: " << Hostel << endl;
        cout << "CGPA: " << cgpa << endl;
    }

public:
    string Name;
    string Degree;
    string Hostel;

    void setRoll(int roll)
    {
        this->roll_no = roll;
    }

    void setGPA(float gpa)
    {
        this->cgpa = gpa;
    }

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

    void update()
    {
        updateDetails();
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

    void display()
    {
        displayDetails();
    }
};

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    Student student1;
    Student student2;

    student1.addDetails("Sajid Miya", 102367013, "Bachlor's in Computer Science and Engineering", "The Tejas Hall", 9.55);
    cout << "Student 1 Details (after parameterized addDetails):" << endl;
    student1.display();

    cout << "\nUpdating Student 1 Details:" << endl;
    student1.update();
    cout << "\nStudent 1 Details (after update):" << endl;
    student1.display();

    cout << "\nEnter details for Student 2:" << endl;
    student2.addDetails();
    cout << "\nStudent 2 Details (after user input addDetails):" << endl;
    student2.display();

    cout << "\nEnter new CGPA for Student 2:" << endl;
    student2.updateCGPA(3.9);
    cout << "\nStudent 2 Details (after parameterized CGPA update):" << endl;
    student2.display();

    cout << "\nEnter new CGPA for Student 2 using input method:" << endl;
    student2.updateCGPA();
    cout << "\nStudent 2 Details (after user input CGPA update):" << endl;
    student2.display();

    cout << "\nEnter new hostel for Student 2:" << endl;
    student2.updateHostel("Hostel H");
    cout << "\nStudent 2 Details (after parameterized Hostel update):" << endl;
    student2.display();

    cout << "\nEnter new hostel for Student 2 using input method:" << endl;
    student2.updateHostel();
    cout << "\nStudent 2 Details (after user input Hostel update):" << endl;
    student2.display();

    return EXIT_SUCCESS;
}
