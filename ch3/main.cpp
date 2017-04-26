#include <iostream>

using namespace std;

int main() {
    cout.setf(ios_base::fixed, ios_base::floatfield);

    int a, b, c;
    a = (int) 19.99 + (int) 11.99;
    b = int(19.99) + int(11.99);
    c = 19.99 + 11.99;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}