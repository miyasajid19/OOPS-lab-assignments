#include <iostream>
#include <cstdlib>
using namespace std;

class X {
    int a;

protected:
    int b;

public:
    int c;
    X() : a(0), b(0), c(0) {}
    
    // Member functions
    void display();
    void set(int a1, int b1, int c1);
};

// Member function definitions
void X::display() {
    cout << this->a << "\t" << this->b << "\t" << this->c << endl;
}

void X::set(int a1, int b1, int c1) {
    this->a = a1;
    this->b = b1;
    this->c = c1;
}

int main() {
    X obj;
    obj.set(5, 10, 15);  // Set values to the members of X
    obj.display();       // Display the values of the members of X

    return EXIT_SUCCESS;
}
