#include <iostream>

using namespace std;

int main() {
    char charr1[20];
    char charr2[20] = "song";
    string str1;
    string str2 = "junjun";
    cin >> charr1;
    cin >> str1;

    cout << charr1 << endl;
    cout << charr2 << endl;
    cout << str1 << endl;
    cout << str2 << endl;


    cout << charr2[2] << endl;
    cout << str2[2] << endl;


    return 0;
}