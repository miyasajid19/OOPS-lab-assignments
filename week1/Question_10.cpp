#include <iostream>
using namespace std;

int main() {
    int num;

    num = 432;
    cout << "For the number " << num << ": ";
    if (num % 2 == 0) {
        cout << "even" << endl;
    } else {
        cout << "odd" << endl;
    }

    num = 407;
    cout << "For the number " << num << ": ";
    num % 2 == 0 ? cout << "even" << endl : cout << "odd" << endl;

    return 0;
}
