#include <iostream>
#include <cstdlib>
using namespace std;
class X
{
public:
    static int x;
    static void display()
    {
        cout << x << endl;
    }
    X()
    {
        x++;
        cout << "i am constuctor" << endl;
    }
    ~X()
    {
        cout << "i am destructor" << endl;
    }
};
int X ::x = 1;
int main()
{
    X ::display();
    X x[5];
    X ::display();

    return EXIT_SUCCESS;
}