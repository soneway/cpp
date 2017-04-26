#include <iostream>

using namespace std;

int main() {
    cout.setf(ios_base::fixed, ios_base::floatfield);

    float tree = 3;
    int guess(3.9832);
    int debt = 7.2e12;
    cout << tree << endl;
    cout << guess << endl;
    cout << debt << endl;

    const int code = 66;
    int x = 66;
    char c1{11111111};
    char c2{66};
    char c3{code};
    char c4{x};

    return 0;
}