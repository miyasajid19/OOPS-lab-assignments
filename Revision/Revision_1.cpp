/*
1. Design a Library Management System
Problem Statement:
You are tasked with designing a Library Management System that uses the OOP concepts of classes, objects, constructors, and inheritance. The system should manage different types of members (e.g., students, faculty) and different categories of books (e.g., fiction, non-fiction).

Requirements:
Create a base class Book with attributes such as title, author, ISBN, and availability.
Create a derived class FictionBook and another derived class NonFictionBook. Each of these should inherit from Book and add their specific attributes, such as genre for fiction and subject for non-fiction.
Create another class Member with attributes such as memberID, name, and borrowedBooks.
Use constructors to initialize the objects and destructors to release the memory when objects are destroyed.
Demonstrate the concept of inheritance by creating separate derived classes StudentMember and FacultyMember from Member.
Use a friend function to access private members of the class.
Explanation:
Classes: Book, FictionBook, NonFictionBook, Member, StudentMember, FacultyMember.
Inheritance: FictionBook and NonFictionBook inherit from Book. StudentMember and FacultyMember inherit from Member.
Attributes: For Book, attributes are title, author, ISBN, and availability. For Member, attributes are memberID, name, and borrowedBooks.
Instances: Create instances of FictionBook, NonFictionBook, StudentMember, and FacultyMember.
Friend Function: A function that can access the private data of the Book or Member class.
Constructors & Destructors: Constructors initialize the objects (e.g., when a book or member is created), and destructors release resources (e.g., when a member leaves or a book is removed from the system).

*/
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;
class StudentMember;
class FacultyMember;
class Book
{
public:
    string title;
    string author;
    string ISBN;
    bool availablity;
    int bookId;
    static int countBook;
    int memberId;
    string memberType;
    Book(string title, string author, string ISBN) : title(title), author(author), ISBN(ISBN), availablity(true)
    {
        this->bookId = countBook;
        countBook++;
    }
    void lend(int id, string memberType)
    {
        this->memberId = id;
        this->memberType = memberType;
        this->availablity = false;
    }
    bool isAvailable()
    {
        return this->availablity;
    }
    void retain()
    {
        this->memberId = -1;
        this->memberType = "";
    }
    void Display()
    {
        cout << bookId << '\t';
        cout << title << '\t';
        cout << author << "\t";
        cout << ISBN << '\t';
        cout << availablity << '\t';
    }
    friend bool HasBorrowed(StudentMember, Book);
    friend bool HasBorrowed(FacultyMember, Book);
};
class FictionBook : public Book
{
public:
    string genre;
    FictionBook(string title, string author, string ISBN) : Book(title, author, ISBN)
    {
        this->genre = "Fictional";
    }
    ~FictionBook() {}
    void Display()
    {
        Book::Display();
        cout << genre << endl;
    }
};
class NonFictionBook : public Book
{
public:
    string subject;
    NonFictionBook(string title, string author, string ISBN, string subject) : Book(title, author, ISBN)
    {
        this->subject = subject;
    }
    ~NonFictionBook() {}
    void Display()
    {
        Book::Display();
        cout << subject << endl;
    }
};
class Member
{
protected:
    string name;
    vector<string> borrowedBook;

public:
    Member(string name)
    {
        this->name = name;
    }
    void Display()
    {
        cout << this->name << "\t";
    }
};
class StudentMember : public Member
{
private:
    static int studentcount;
    int StudentId;

public:
    StudentMember(string name) : Member(name)
    {
        this->StudentId = studentcount++;
    }
    void Display()
    {
        Member::Display();
        cout << "Student\t";
        cout << this->StudentId << endl;
    }
    friend bool HasBorrowed(StudentMember, Book);
};
class FacultyMember : public Member
{

private:
    static int facultyCount;
    int FacultyMemberId;

public:
    FacultyMember(string name) : Member(name)
    {
        this->FacultyMemberId = facultyCount++;
    }
    void Display()
    {
        Member::Display();
        cout << "Faculty\t";
        cout << FacultyMemberId << endl;
    }
    friend bool HasBorrowed(FacultyMember, Book);
};
bool HasBorrowed(StudentMember const student, Book const book)
{
    for (auto x : student.borrowedBook)
    {
        if (book.availablity == false and book.memberId == student.StudentId and book.memberType == "student")
        {
            return true;
        }
    }
    return false;
}
bool HasBorrowed(FacultyMember const Faculty, Book const book)
{
    for (auto x : Faculty.borrowedBook)
    {
        if (book.availablity == false and book.memberId == Faculty.FacultyMemberId and book.memberType == "Faculty")
        {
            return true;
        }
    }
    return false;
}
int Book ::countBook = 1;
int FacultyMember ::facultyCount = 1;
int StudentMember ::studentcount = 1;
int main()
{
    StudentMember std1("sajid miya");
    std1.Display();
    StudentMember std2("sajid miya");
    std2.Display();
    StudentMember std3("sajid miya");
    std3.Display();
    FacultyMember fact1("pramisha karki");
    fact1.Display();
    FacultyMember fact2("pramisha karki");
    fact2.Display();
    FacultyMember fact3("pramisha karki");
    fact3.Display();
    return EXIT_SUCCESS;
}