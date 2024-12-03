#include <iostream>
#include <cstdlib>
using namespace std;
template <typename T, typename U>
void show(T t, U u)
{
    cout << t << "\t" << u << endl
         << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    show(100, "hello hello");
    show(3, 3);
    return EXIT_SUCCESS;
}