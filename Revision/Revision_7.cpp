#include <iostream>
#include <cstdlib>
using namespace std;
class pointersToObjects
{
public:
    int x;
    pointersToObjects() {}
    void set(int value)
    {
        this->x = value;
    }
    void display()
    {
        cout << "x == " << this->x << " -->" << &x << endl;
    }
};
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    pointersToObjects *ptr;
    ptr = new pointersToObjects[2];
    ptr->set(407);
    (ptr + 1)->set(432);
    ptr->display();
    (ptr+1)->display();
    return EXIT_SUCCESS;
}