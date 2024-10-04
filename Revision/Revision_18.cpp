#include <iostream>
#include <cstdlib>
using namespace std;
class demo
{
private:
    int a;

public:
    demo(int);
    ~demo();
    void display();
};

demo::demo(int value)
{
    cout << "i am created" << endl;
    this->a = value;
}
void demo ::display()
{
    cout << "a == " << a << " and address is " << &a << endl;
}
demo::~demo()
{
    cout << "I am destroyed" << endl;
}
void justCreateDummy()
{
    static demo dummy(1);
    cout << "static object is created" << endl;
    dummy.display();
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cout << "lets create static object :: " << endl;
    justCreateDummy();
    demo haha(12);
    cout << "I am haha and my content is :: ";
    haha.display();
    cout << "static object has not been destoryed yet" << endl;
    return EXIT_SUCCESS;
}