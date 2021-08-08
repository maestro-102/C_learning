// Ссылки должны быть инициализированы

#include <iostream>

using std::cout;
using std::endl;

int main() {
    int x = 3, &y = x;      // y теперь псевдоним x

    cout << "x = " << x << endl << "y = " << y << endl;
    y = 7;
    cout << "x = " << x << endl << "y = " << y << endl;
    return 0;
}
