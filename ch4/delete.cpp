#include <iostream>

using namespace std;

int main()
{
    int * pt = new int;
    *pt = 30;
    cout << pt << endl;
    cout << *pt << endl;

    delete pt;
    cout << pt << endl;
    cout << *pt << endl;

    return 0;
}