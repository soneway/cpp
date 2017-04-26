#include <iostream>

using namespace std;

int main()
{
    double arr[5] = {1, 2, 3, 4, 5};
    double * pt = arr;
    cout << pt << endl;
    // cout << *++pt << endl;
    cout << *pt++ << endl;
    ++pt;
    cout << pt << endl;

    return 0;
}