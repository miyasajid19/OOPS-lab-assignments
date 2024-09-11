#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Book
{
protected:
    string title;
    string author;
    float price;

public:
    Book(string title, string author, float price) : title(title), author(author), price(price) {}

    void setTitle(string title) { this->title = title; }
    string getTitle() { return this->title; }

    void setAuthor(string author) { this->author = author; }
    string getAuthor() { return this->author; }

    void setPrice(float price) { this->price = price; }
    float getPrice() { return this->price; }

    virtual void Display()
    {
        cout << "Title: " << this->title << endl;
        cout << "Author: " << this->author << endl;
        cout << "Price: $" << this->price << endl;
    }
};

class TextBook : public Book
{
private:
    string subject;

public:
    TextBook(string title, string author, float price, string subject) : Book(title, author, price), subject(subject) {}

    void setSubject(string subject) { this->subject = subject; }
    string getSubject() { return this->subject; }

    void Display()
    {
        Book::Display();
        cout << "Subject: " << this->subject << endl
             << endl;
    }
};

int main()
{
    Book book1("The Tale of Jiraiya the Gallant", "Jiraiya", 407.43);
    cout << "General Book Information:" << endl;
    book1.Display();
    cout << endl;

    TextBook textBook1("The Tale of Jiraiya the Gallant", "Jiraiya", 432.41, "Ninja History");
    cout << "TextBook Information:" << endl;
    textBook1.Display();

    return EXIT_SUCCESS;
}
