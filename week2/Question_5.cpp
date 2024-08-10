// Define a class Complex with variables real and imaginary along with following:
// (a) void setComplex (float, float) to initialize object values.
// (b) void displayComplex() to show the complex number
// (c) Pass and return objects to calculate sum of two complex numbers. Display the
// sum.
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Complex
{
public:
    float real;
    float imaginary;
    Complex() : real(0), imaginary(0)
    {
    }
    Complex(float real, float imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    void setComplex(float real, float imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    void displayComplex()
    {
        cout << real << " + " << imaginary << " i" << endl;
    }
    Complex operator+(Complex z)
    {
        float real = this->real + z.real;
        float imaginary = this->imaginary + z.imaginary;
        Complex ans(real, imaginary);
        return ans;
    }
    Complex sum(Complex z)
    {
        float real = this->real + z.real;
        float imaginary = this->imaginary + z.imaginary;
        Complex ans(real, imaginary);
        return ans;
    }
};
    int main()
    {
#ifndef JUDGE_ONLINE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
#endif
        Complex a;
        a.setComplex(3.5, -2.5);

        Complex b(4.0, 2.0);

        Complex c(1.0, -1.0);

        cout << "Complex number a: ";
        a.displayComplex();
        cout << "Complex number b: ";
        b.displayComplex();
        cout << "Complex number c: ";
        c.displayComplex();

        Complex sum1 = a + b;
        cout << "Sum of a and b: ";
        sum1.displayComplex();

        Complex sum2 = c.sum(b);
        cout << "Sum of c and b: ";
        sum2.displayComplex();

        return EXIT_SUCCESS;
    }
