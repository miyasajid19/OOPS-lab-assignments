#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num1 = 123;
    int num2 = 4567;
    float num3 = 89.65;

    cout << "Formatted Output:\n";

    cout << "Number 1: " << setw(10) << num1 << '\n';
    cout << "Number 2: " << setw(10) << num2 << '\n';

    cout << "Number 3: " << setw(10) << fixed << setprecision(2) << num3 << '\n';

    cout << "Tab\tTab\n";
    cout << "Backspace\bExample\n";

    cout << "End of formatting" << endl;

    return 0;
}
