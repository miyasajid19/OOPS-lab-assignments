#include <iostream>
#include <cstdlib>
using namespace std;
class Parent1
{
public:
    Parent1()
    {
        cout << "i am parent 1 constructor" << endl;
    }
    ~Parent1()
    {
        cout << "i am parent 1 distructor" << endl;
    }
};
class Parent2
{
public:
    Parent2()
    {
        cout << "i am parent 2 constructor" << endl;
    }
    ~Parent2()
    {
        cout << "i am parent 2 distructor" << endl;
    }
};
class FirstChild
{
public:
    FirstChild()
    {
        cout << "i am FirstChild constructor" << endl;
    }
    ~FirstChild()
    {
        cout << "i am FirstChild distructor" << endl;
    }
};
class MultiLevelChild : public Parent1, public Parent2
{
public:
    MultiLevelChild()
    {
        cout << "i am MultiLevelChild constructor" << endl;
    }
    ~MultiLevelChild()
    {
        cout << "i am MultiLevelChild distructor" << endl;
    }
};
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FirstChild f1;
    cout << endl
         << endl
         << endl;
    MultiLevelChild f2;
    cout << endl
         << endl
         << endl;
    return EXIT_SUCCESS;
}