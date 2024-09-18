#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    static int count; // Static data member to keep track of the roll number
    string name;
    int rollNumber;
    float marks;

public:
    Student() {}
    // Parameterized constructor
    Student(string name, float marks) : name(name), marks(marks)
    {
        rollNumber = ++count; // Unique roll number for each student
    }

    // Destructor
    ~Student()
    {
        cout << "Farewell, " << name << ". Your record is deleted." << endl;
    }

    // Member function to display student details
    void displayDetails() const
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }

    // Function to calculate grade based on marks
    char calculateGrade() const
    {
        if (marks >= 90)
            return 'A';
        else if (marks >= 80)
            return 'B';
        else if (marks >= 70)
            return 'C';
        else if (marks >= 60)
            return 'D';
        else
            return 'F';
    }
};

// Initialize static member
int Student::count = 0;

int main()
{
    int numStudents;

    // Taking input for number of students
    cout << "Enter number of students: ";
    cin >> numStudents;

    // Dynamically create an array of Student objects
    Student *students = new Student[numStudents];

    // Input student details and create student objects dynamically
    for (int i = 0; i < numStudents; i++)
    {
        string name;
        float marks;

        cout << "\nEnter details for student " << (i + 1) << ":\n";
        cout << "Name: ";
        cin >> name;
        cout << "Marks: ";
        cin >> marks;

        // Construct each student in the array using placement new
        new (&students[i]) Student(name, marks);
    }

    // Display the details of all students
    cout << "\nStudent Details:\n";
    for (int i = 0; i < numStudents; i++)
    {
        students[i].displayDetails();
        cout << endl;
    }

    // Deleting array of objects
    delete[] students;

    return 0;
}
