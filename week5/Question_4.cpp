#include <iostream>
using namespace std;

// Single Inheritance
class Animal
{
public:
    void eat()
    {
        cout << "Animal eating..." << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog barking..." << endl;
    }
};

// Multiple Inheritance
class Father
{
public:
    void work()
    {
        cout << "Father working..." << endl;
    }
};

class Mother
{
public:
    void cook()
    {
        cout << "Mother cooking..." << endl;
    }
};

class Child : public Father, public Mother
{
public:
    void study()
    {
        cout << "Child studying..." << endl;
    }
};

// Multilevel Inheritance
class Vehicle
{
public:
    void start()
    {
        cout << "Vehicle started" << endl;
    }
};

class Car : public Vehicle
{
public:
    void drive()
    {
        cout << "Car driving..." << endl;
    }
};

class SportsCar : public Car
{
public:
    void race()
    {
        cout << "Sports car racing..." << endl;
    }
};

// Hierarchical Inheritance
class Shape
{
public:
    void draw()
    {
        cout << "Drawing shape..." << endl;
    }
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing circle..." << endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing rectangle..." << endl;
    }
};

// Hybrid Inheritance
class Person
{
public:
    void walk()
    {
        cout << "Person walking..." << endl;
    }
};

class Employee : public Person
{
public:
    void work()
    {
        cout << "Employee working..." << endl;
    }
};

class Student : public Person
{
public:
    void study()
    {
        cout << "Student studying..." << endl;
    }
};

class TeachingAssistant : public Employee, public Student
{
public:
    void assist()
    {
        cout << "Teaching Assistant assisting..." << endl;
    }
};

int main()
{
    // Single Inheritance
    Dog dog;
    dog.eat();
    dog.bark();
    cout << endl;

    // Multiple Inheritance
    Child child;
    child.work();
    child.cook();
    child.study();
    cout << endl;

    // Multilevel Inheritance
    SportsCar sportsCar;
    sportsCar.start();
    sportsCar.drive();
    sportsCar.race();
    cout << endl;

    // Hierarchical Inheritance
    Circle circle;
    Rectangle rectangle;
    circle.draw();
    rectangle.draw();
    cout << endl;

    // Hybrid Inheritance
    TeachingAssistant ta;
    ta.assist();
    ta.work();
    ta.study();

    return 0;
}
