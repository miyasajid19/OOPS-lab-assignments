#include <iostream>
#include <cstdlib>
using namespace std;

class X
{
    int *arr;
    int *size;

public:
    // Default constructor
    X()
    {
        cout << "This is the default constructor" << endl;
        size = new int(0);
        arr = nullptr; // No array initialized
    }

    // Parameterized constructor
    X(int size)
    {
        cout << "This is the parameterized constructor" << endl;
        this->size = new int(size);  // Dynamically allocate memory for size
        this->arr = new int[size](); // Allocate memory for the array and initialize elements to 0
    }
    void set()
    {
        for (int i = 0; i < *size; i++)
        {
            cout << "enter element :: ";
            int x;
            cin >> x;
            arr[i] = x;
        }
    }
    // Destructor to free memory
    ~X()
    {
        delete size;
        delete[] arr; // Use delete[] for arrays
        cout << "Destructor called, memory released!" << endl;
    }

    // Method to display the array elements
    void display()
    {
        cout << "Array elements: ";
        for (int i = 0; i < *size; i++)
        {
            cout << arr[i] << " "; // Print each element in the array
        }
        cout << endl;
    }
};

int main()
{
    X obj1;    // Default constructor will be called
    X obj2(5); // Parameterized constructor with size 5

    obj2.display(); // Display the array

    obj2.set();
    obj2.display();
    return EXIT_SUCCESS;
}
