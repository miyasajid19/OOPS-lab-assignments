#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
class Point
{
    int *co_cordinates;

public:
    Point()
    {
        co_cordinates = new int[2]();
    }
    Point(int x, int y)
    {
        co_cordinates = new int[2];
        co_cordinates[0] = x;
        co_cordinates[1] = y;
    }
    void display()
    {
        cout << "(" << co_cordinates[0] << ',' << co_cordinates[1] << ")";
    }
    friend float distance(Point, Point);
};
float distance(Point P, Point Q)
{
    return sqrt(pow((P.co_cordinates[0] - Q.co_cordinates[0]), 2) + pow((P.co_cordinates[1] - Q.co_cordinates[1]), 2));
}
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    cout << "enter coordinates of P :: ";
    int x, y;
    cin >> x >> y;
    Point P(x, y);
    cout << "enter coordinates of Q :: ";
    cin >> x >> y;
    Point Q(x, y);
    cout << "The distance between in";
    P.display();
    cout << "and ";
    Q.display();
    cout << " is " << distance(P, Q);
    return EXIT_SUCCESS;
}