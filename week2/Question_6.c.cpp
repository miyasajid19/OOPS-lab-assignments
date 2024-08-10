#include <iostream>
#include <cstdlib>
using namespace std;
class Counter
{
public:
    static int count;
    void increment()
    {
        count++;
    }
    void display()
    {
        cout << "count : " << count << endl;
    }
};
int Counter::count = 0;
int main()
{
#ifndef JUDGE_ONLINE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    Counter obj1, obj2;
    obj1.increment();
    obj1.display();
    obj2.increment();
    obj1.display();
    obj2.increment();
    obj2.display();
    return EXIT_SUCCESS;
}
