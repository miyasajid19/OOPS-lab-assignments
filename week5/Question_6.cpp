#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
class Book
{
protected:
    string name;
    string title;
    float price;

public:
    Book(string title, string name, float price) : title(title), name(name), price(price) {}
    void setTitle(string title)
    {
        this->title = title;
    }
    string getTitle()
    {
        return this->title;
    }
    void setPrice(float price)
    {
        this->price = price;
    }
    float getPrice()
    {
        return this->price;
    }
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return this->name;
    }
    void Display()
    {
        cout << "Title :: " << this->title << endl;
        cout << "Name :: " << this->name << endl;
        cout << "Price :: " << this->price << endl;
    }
};
class TextBook : public Book
{
private:
    string subject;

public:
    TextBook(string title, string name, float price, string subject) : Book(title, name, price), subject(subject) {}
    void setSubject(string subject)
    {
        this->subject = subject;
    }
    string getSubject()
    {
        return this->subject;
    }
    void Display()
    {
        Book::Display();
        cout << "Subject :: " << this->subject << endl
             << endl;
    }
};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    Book book1("Jiraya : The Tale of Gallent", "Master Jiraya", 407.432);
    book1.Display();
    cout << endl;
    TextBook textBook1("Jiraya : The Tale of Gallent", "Master Jiraya", 432.407, "Village Hidden In The Leaf");
    textBook1.Display();
    return EXIT_SUCCESS;
}