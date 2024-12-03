#include <iostream>
#include <cstdlib>
using namespace std;
class solution
{
public:
    template <typename T, typename U>
    void show(T t, U u)
    {
        cout << t << "\t" << u << endl
             << endl;
    }
};
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    solution soln;
    soln.show(100, "hello hello");
    soln.show('k', 1500);
    soln.show(1.23, 2987);
    return EXIT_SUCCESS;
}