#include <iostream>
#include <cstdlib>
using namespace std;

class demo {
public:
    int value;
    demo() : value(0) {}
    demo(int value) : value(value) {}
    ~demo() {}
};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    demo first(432);
    demo* second;
    second = &first;

    cout << "Value of 'first' object: " << first.value << endl;
    cout << "Value accessed through 'second' pointer: " << second->value << endl;

    return EXIT_SUCCESS;
}
