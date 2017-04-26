#include <iostream>

using namespace std;

int main()
{
    char flower[10] = "rose";
    cout << flower << "s are red" << endl;
    // 给cout提供一个地址,它将从该字符开始打印,直到遇到空字符为止
    cout << &flower[0] << endl;

    char animal[20] = "cat";
    const char * bird = "wren";
    char * ps;
    cout << animal << endl;
    cout << bird << endl;
    cout << ps << endl;

    ps = animal;
    cout << ps << endl;

    return 0;
}