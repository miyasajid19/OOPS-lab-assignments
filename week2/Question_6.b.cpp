#include <iostream>
#include <cstdlib>
using namespace std;
int a = 407;
int main()
{
#ifndef JUDGE_ONLINE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a = 432;
    cout << "The value of a is " << a << endl;
    // Access a global variable with same name as a local variable
    cout << "The value of a is " << ::a << endl;
    return EXIT_SUCCESS;
}
