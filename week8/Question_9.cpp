#include <iostream>
using namespace std;

// Template class with a non-type parameter
template <typename T, int N>
class Array
{
private:
    T arr[N]; // Array of type T and size N

public:
    // Constructor to initialize array elements
    Array()
    {
        for (int i = 0; i < N; ++i)
        {
            arr[i] = T(); // Default initialize
        }
    }

    // Function to set value at a given index
    void set(int index, const T &value)
    {
        if (index >= 0 && index < N)
        {
            arr[index] = value;
        }
        else
        {
            cout << "Index out of bounds!" << endl;
        }
    }

    // Function to get value at a given index
    T get(int index) const
    {
        if (index >= 0 && index < N)
        {
            return arr[index];
        }
        else
        {
            cout << "Index out of bounds!" << endl;
            return T(); // Return default value of T
        }
    }

    // Function to display the array
    void display() const
    {
        for (int i = 0; i < N; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
#ifndef online_judge
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // !online_judge

    // Create an array of 5 integers
    Array<int, 5> intArray;

    // Set values in the array
    for (int i = 0; i < 5; ++i)
    {
        intArray.set(i, i * 10); // Set values as multiples of 10
    }

    // Display the array contents
    cout << "Integer Array: ";
    intArray.display();

    // Create an array of 3 doubles
    Array<double, 3> doubleArray;

    // Set values in the array
    doubleArray.set(0, 3.14);
    doubleArray.set(1, 2.71);
    doubleArray.set(2, 432);

    // Display the array contents
    cout << "Double Array: ";
    doubleArray.display();

    return 0;
}
