/*
Define a class Rectangle with variables width and height of integer typwe along with 
following: 
 
(a)  void getdata() to initialize object values 
(b) void calculatearea() to calculate and display the area.
*/
#include <iostream>
#include <cstdlib>
using namespace std;
class Rectangle
{
public:
int length, breadth;
Rectangle() :length(0), breadth(0)
{

}
Rectangle(int length , int breadth)
{
    this->length=length;
    this->breadth=breadth;
}
void getdata()
{
    cout<<"Length : "<<this->length<<endl<<"Breadth : "<<this->breadth<<endl;
}
void calculatearea()
{
    cout<<"The area of rectangle is "<< this->length*this->breadth<<endl;
}
};
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

int l,b;
cout<<"Enter the length and breadth of the rectangle : "<<endl;
cin>>l>>b;
cout<<"method 1 : "<<endl;
Rectangle rect1;
rect1.length=l;
rect1.breadth=b;
rect1.calculatearea();

cout<<"method 2 : "<<endl;
Rectangle rect2(l,b);
rect2.calculatearea();



    return 0;
}