#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
class X
{
    vector<X> objects;

public:
    string name;
    int age;
    static int count;
    int id;
    X(string name, int age)
    {
        this->name = name;
        this->age = age;
        this->id = count++;
        objects.push_back(*this);
    }
    void print()
    {
        cout << this->id << "\t" << this->name << "\t" << this->age << endl;
    }
    static void display()
    {
        for (auto x : objects)
        {
            x.display();
        }
    }
};
int main()
{
    X a("sajid miya", 432);
    X b("Pramisha karki", 407);
    X c("pramisajid", 407432);
    X ::display();
    return EXIT_SUCCESS;
}