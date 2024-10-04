// . Create a base class Shape that contains a constant data member area and a virtual
// function calculateArea(). A derived class Circle should inherit from Shape and override the
// calculateArea() function. Additionally, use a static member to count the number of Circle
// objects created. Use the scope resolution operator to display the number of Circle objects
// created and call the constant member function to display the area of the circle.
// Requirements:
// 1. Use a constant data member for area and initialize it using the constructor.
// 2. Implement a virtual function to calculate the area.
// 3. Use a static data member to count the number of Circle objects.
// 4. Use the scope resolution operator to access the static member in the main function.
#include <iostream>
#include <cstdlib>
using namespace std;
class Shape
{
protected:
    double area;

public:
    Shape(double a) : area(a) {};
    virtual void CalculateArea() = 0;
    double getArea() const
    {
        return area;
    }
};
class Circle : public Shape
{
    float radius;

public:
    static int countCircle;
    Circle(float radius) : Shape((22 / 7 )* radius * radius), radius(radius)
    {
        ++countCircle;
    };
    void CalculateArea() override
    {
        this->area = 22 / 7 * radius * radius;
    }
};
int Circle::countCircle = 0;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
cout<<"Total No. circles created : "<<Circle::countCircle<<endl<<endl;
Circle C1(7);
cout<<"the area is "<<C1.getArea()<<endl;
cout<<"Total No. circles created : "<<Circle::countCircle<<endl<<endl;
Circle C2(1);
cout<<"the area is "<<C2.getArea()<<endl;
cout<<"Total No. circles created : "<<Circle::countCircle<<endl<<endl;
    return EXIT_SUCCESS;
}