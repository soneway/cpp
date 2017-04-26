#include <iostream>
#include <cmath>

using namespace std;

int stometolb(int sts) {
    return 14 * sts;
}

int main() {
    int stone;
    cout << "请输入weight" << endl;
    cin >> stone;
    int pounds = stometolb(stone);
    cout << pounds;

    return 0;
}

