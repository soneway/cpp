#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double area;
    cout << "输入面积" << endl;
    cin >> area;
    double side = sqrt(area);
    cout << "半径: " << side << endl;

    return 0;
}

