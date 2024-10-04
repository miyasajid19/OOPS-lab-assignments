/*
You are tasked with designing a class hierarchy that demonstrates the behavior of constructor calling in both multiple inheritance and composition.
Requirements:
1. Create a base class Person with:
    - A protected member name (string) to store the person's name.
    - A constructor that initializes the name.
2. Create another base class Address with:
    - Private members city and zipCode (both strings).
    - A constructor that initializes the city and zipCode.
3. Create a class Employee that inherits from both Person and Address:
    - A private member employeeID (int) to store the employee's ID.
    - A constructor that initializes name (from Person), city and zipCode (from Address), and employeeID.
4. Create a class Company that contains an Employee object as a member (composition):
    - Private members companyName (string) and revenue (double).
    - A constructor that initializes companyName, revenue, and the Employee object by passing appropriate values.
5. In the main() function:
    - Create an object of Company and initialize all members via the constructor.
    - Print out the employee’s details (name, city, zipCode, and employeeID) as well as the company’s details.

*/
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
class Person
{
protected:
    string name;

public:
    Person(string name)
    {
        this->name = name;
        cout << "instance of Person is intialized" << endl;
    }
};
class Address
{
protected:
    string city;
    string zipcode;

public:
    Address(string city, string zipcode)
    {
        this->city = city;
        this->zipcode = zipcode;
        cout << "instance of Address is intialized" << endl;
    }
};
class Employee : public Person, public Address
{
protected:
    int MemberId;

public:
    Employee(string name, string city, string zipcode, int id) : Person(name), Address(city, zipcode), MemberId(id)
    {
        cout << "instance of Employee is intialized" << endl;
    }
};
class Company : public Employee
{
    string CompanyName;
    double Revenue;

public:
    Company(string name, string city, string zipcode, int id, string CompanyName, double Revenue) : Employee(name, city, zipcode, id), CompanyName(CompanyName), Revenue(Revenue)
    {
        cout << "instance of Company is intialized" << endl;
    }
    void display()
    {
        cout << "Name : " << this->name << endl;
        cout << "City : " << this->city << endl;
        cout << "ZipCode : " << this->zipcode << endl;
        cout << "Member Id : " << this->MemberId << endl;
        cout << "Company's Name : " << this->CompanyName << endl;
        cout << "Company's Revenue : " << this->Revenue << endl
             << endl;
    }
};
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    Company temp("Obito Uchiha", "The Village Hidden in the Leaf", "Naruto verse", 432, "Naruto:Shippudean", 432407.432407);
    Company temp1("Sho Yamato", "Idaten jump", "MTB Verse", 407, "Idaten Jump", 407432.407432);
    temp.display();
    temp1.display();
    return EXIT_SUCCESS;
}