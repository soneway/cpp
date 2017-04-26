#include <iostream>

using namespace std;

// 函数原型
void sayHi(string);

int main() {
    sayHi("song");

    return 0;
}

// 函数声明
void sayHi(string name) {
    cout << "hi, " << name;
}

