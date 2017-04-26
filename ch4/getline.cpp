#include <iostream>

using namespace std;

int main() {
    char charr[20];
    string str;
    cin.getline(charr, 20);
    getline(cin, str);

    cout << charr << endl;
    cout << str << endl;


    return 0;
}