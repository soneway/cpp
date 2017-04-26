#include <iostream>

using namespace std;

int main()
{
    int nights = 1001;
    int * pt = new int;
    *pt = 1001;

    cout << &nights << endl;
    cout << *pt << endl;
    cout << pt << endl;

    double * pd = new double;
    *pd = 1000000;
    
    cout << sizeof(pt) << endl;
    cout << sizeof(pd) << endl;

    cout << sizeof(*pt) << endl;
    cout << sizeof(*pd) << endl;

    return 0;
}