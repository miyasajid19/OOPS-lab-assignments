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
    static int MemberId;
    vector<string> borrowedBook;

public:
    Member(string name)
    {
        this->name = name;
        this->MemberId = MemberId++;
    }
    void Display()
    {
        cout<<this->MemberId<<"\t";
        cout<<this->name<<"\t";
    }
};
class StudentMember : public Member
{
private:
    static int StudentId;

public:
    StudentMember(string name) : Member(name)
    {
        this->StudentId = StudentId++;
    }
    void Display()
    {
        Member::Display();
        cout<<"Student"<<endl;
        cout<<this->StudentId<<endl;
    }
    void LendBook(int id)
    {
        
    }
    friend bool HasBorrowed(StudentMember, Book);
};
class FacultyMember : public Member
{

private:
    static int FacultyMemberId;

public:
    FacultyMember(string name) : Member(name)
    {
        this->FacultyMemberId = FacultyMemberId++;
    }
        void Display()
    {
        Member::Display();
        cout<<"Faculty\t";
        cout<<FacultyMemberId<<endl;
    }
    friend bool HasBorrowed(FacultyMember, Book);
};
bool HasBorrowed(StudentMember const student, Book const book)
{
    for (auto x : student.borrowedBook)
    {
        if (book.availablity == false and book.memberId == student.MemberId and book.memberType == "student")
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
        if (book.availablity == false and book.memberId == Faculty.MemberId and book.memberType == "Faculty")
        {
            return true;
        }
    }
    return false;
}
int Member ::MemberId = 1;
int Book ::countBook = 1;
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    cout << "all i want was the love and what i get is the pain" << endl;
    cout << "the moment had passed and we remained like strangers among the sea of graduates";

    return EXIT_SUCCESS;
}