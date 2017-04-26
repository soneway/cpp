#include <iostream>

using namespace std;

int main()
{
    int a = 1;
    int * p_a = &a;

    cout << *p_a << endl;
    cout << p_a << endl;

    long * fellow;
    *fellow = 22333;
    cout << fellow << endl;
    cout << *fellow << endl;

    return 0;
}