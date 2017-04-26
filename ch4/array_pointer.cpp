#include <iostream>

using namespace std;

int main()
{
    double wages[3] {1000, 2000, 3000};
    double * pw = wages;

    // C++把数组名当作数组第1个元素的地址
    cout << "wages: " << wages << endl;
    // 对数组名取地址时,数组名不再表示地址,而是取到整个数组的内存块的地址
    cout << "&wages: " << &wages << endl;
    // 从整个数组的内存块地址中取第1个,也就是数组第1个元素的地址
    cout << "&wages[0]: " << &wages[0] << endl;

    // 从第1个元素的地址加1
    cout << "wages+1: " << wages + 1 << endl;
    // 从数组内存块地址加1
    cout << "&wages+1: " << &wages + 1 << endl;

    cout << "pw: " << pw << endl;
    cout << pw[0] << endl;

    // 指针可修改
    cout << ++pw << endl;
    // 数组名是常量,不可修改
    cout << ++wages << endl;


    int a = 1;
    // new返回一个未命名的内存地址
    int * pa = new int;
    cout << pa << endl;
    // 被赋值为已被命名的内存地址
    pa = &a;
    cout << pa << endl;

    return 0;
}