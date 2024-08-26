#include <iostream>
#include <cstdlib>
using namespace std;
class Rectangle
{
    int length;
    int breadth;

public:
    Rectangle() : length(0), breadth(0) {}
    Rectangle(int length) : length(length), breadth(length) {}
    Rectangle(int length, int breadth) : length(length), breadth(breadth) {}
    ~Rectangle() {}
    void set(int length)
    {
        this->length = this->breadth = length;
    }
    void set(int length, int breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }
    int Area()
    {
        return this->length * this->breadth;
    }
};
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int *size, *length, *breadth;
    Rectangle *rectangle;
    cout << "how many rectangles do you have?" << endl;
    size = new int;
    cin >> *size;
    rectangle = new Rectangle[*size];
    length = new int;
    breadth = new int;
    for (int i = 0; i < *size; i++)
    {
        cout << "enter length and breadth for rectangle " << i + 1 << endl;
        cin >> *length >> *breadth;
        rectangle[i].set(*length, *breadth);
    }
    for (int i =0;i<*size;i++)
    {
        cout<<"Area for rectangle " <<i+1<<" is "<<rectangle[i].Area()<<endl;
    }
    delete[] rectangle;
    delete size;
    delete length;
    delete breadth;
    return EXIT_SUCCESS;
}