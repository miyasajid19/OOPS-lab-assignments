#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

class X
{
    static vector<X> objects; // Declare static vector to hold all objects

public:
    string name;
    int age;
    static int count;
    int id;

    X(string name, int age) : name(name), age(age), id(count++)
    {
        objects.push_back(*this); // Store a copy of the current object
    }

    void print() const
    { // Mark print as const
        cout << this->id << "\t" << this->name << "\t" << this->age << endl;
    }

    static void display()
    {
        for (const auto &x : objects)
        {              // Use const reference to avoid copying
            x.print(); // Call the print() method
        }
    }
};

// Initialize static members
int X::count = 0;
vector<X> X::objects;

int main()
{
    X a("obito Uchiha", 39);
    X b("Rin Nohara", 13);
    X c("Kakashi Hatake", 432);
    X::display();
    return EXIT_SUCCESS;
}
