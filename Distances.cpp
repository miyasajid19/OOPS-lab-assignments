// Create two classes DM and DB which stores value of distances. DM stores distances in
// meters and centimetres, whereas DB in feet and inches. Write a program that can read values
// for the objects of both classes. Further, adds a DM object with a DB object. Use a friend
// function to carry out the addition of both objects. The object that stores the result may be a
// DM object or DB object, depending on the units in which the results required.
// Further, the display should be in the format of feet and inches or metres and centimetres
// depending on the object on the display.
#include <iostream>
#include <cstdlib>
using namespace std;
class DB;
class DM
{
    int meter;
    int centimeter;

public:
    DM(int meter, int centimeter)
    {
        this->meter = meter + centimeter / 100;
        this->centimeter = centimeter % 100;
    }
    void Display()
    {
        cout << "The distance is " << this->meter << " m and " << this->centimeter << "cm.\n";
    }

    friend DM Add(DM &, DB &);
    friend DB Add1(DM &, DB &);
};
class DB
{
    int foot;
    int inch;

public:
    DB(int foot, int inch)
    {
        this->foot = foot + inch / 12;
        this->inch = inch % 12;
    }
    void Display()
    {
        cout << "The distance is " << this->foot << "ft and " << this->inch << " in.\n";
    }
    friend DM Add(DM &, DB &);
    friend DB Add1(DM &, DB &);
};
DM Add(DM &a, DB &b)
{
    int temp = a.meter * 100 + a.centimeter + b.foot * 30 + b.inch * (30.48 / 12);
    return DM(temp / 100, temp % 100);
}
DB Add1(DM &a, DB &b)
{
    int temp =(a.meter*100+a.centimeter)/2.54+b.foot*12+b.inch;
    return DB(temp / 12, temp % 12);
}
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    DM temp(1, 123);
    temp.Display();
    DB temp1(1, 123);
    temp1.Display();
    DM result=Add(temp,temp1);
    result.Display();
    DB result1=Add1(temp,temp1);
    result1.Display();
    return EXIT_SUCCESS;
}
// 1 feet =30.28 cm
// 1 feet =12 inch
// 1m=100cm
