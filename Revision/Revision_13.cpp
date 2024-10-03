#include <iostream>
#include <cstdlib>
using namespace std;
class X
{
    int x;

public:
    X()
    {
        this->x = 432;
    }
    void set(int value)
    {
        this->x = value;
    }
    friend bool isEqual(X, X);
};
bool isEqual(X obj1, X obj2)
{
    cout << "Private value of obj1 is " << obj1.x << endl;
    cout << "Private value of obj2 is " << obj2.x << endl;
    cout << "Are private values are equa?? " << endl;
    return obj1.x == obj2.x;
}
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    X obj1;
    X obj2;
    cout << boolalpha;
    cout << isEqual(obj1, obj2) << endl<< endl;
    obj1.set(407);
    cout << isEqual(obj1, obj2) << endl;
    return EXIT_SUCCESS;
}