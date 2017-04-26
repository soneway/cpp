#include <iostream>

using namespace std;

int main() {
    int n_old = 30;

    cout << "INT_MAX: " << INT_MAX << endl;
    cout << "SHRT_MAX: " << SHRT_MAX << endl;
    cout << "LONG_MAX: " << LONG_MAX << endl;
    cout << "LLONG_MAX: " << LLONG_MAX << endl;

    cout << "sizeof int(bytes): " << sizeof(int) << endl;
    cout << "sizeof short(bytes): " << sizeof(short) << endl;
    cout << "sizeof long(bytes): " << sizeof(long) << endl;
    cout << "sizeof long long(bytes): " << sizeof(long long) << endl;
    // 也可以写成sizeof n_old
    cout << "sizeof n_old(bytes): " << sizeof(n_old) << endl;

    cout << "min int: " << INT_MIN << endl;
    cout << "bits per byte: " << CHAR_BIT << endl;

    return 0;
}