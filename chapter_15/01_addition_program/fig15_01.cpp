// Программа сложения

#include "iostream"

using std::cout;
using std::cin;
using std::endl;

int main() {
    int integer1;

    cout << "Enter first integer\n";
    cin >> integer1;

    int integer2;                  // объявление

    cout << "Enter second integer\n";
    cin >> integer2;
    int sum = integer1 + integer2;
    cout << "Sum is " << sum << endl;

    return 0;
}
