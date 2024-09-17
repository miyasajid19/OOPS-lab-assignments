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
using namespace std;
class Book
{
public:
    string title;
    string author;
    string ISBN;
    bool availablity;
    static int countBook;
    Book(string title, string author, string ISBN) : title(title), author(author), ISBN(ISBN), availablity(true)
    {
        countBook++;
    }
};
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    cout << "all i want was the love and what i get is the pain";
    exit(1);
    cout << "the moment had passed and we remained like strangers among the sea of graduates";

    return EXIT_SUCCESS;
}