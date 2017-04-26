#include <iostream>

using namespace std;

int main()
{
    double num;
    double sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "value " << i << " is: ";
        cin >> num;
        sum += num;
    }
    cout << sum << endl;
    cout << sum / 5 << endl;

    int x = 50;
    {
        int y = 100;
        cout << x << endl;
        cout << y << endl;
    }
    cout << x << endl;
    cout << y << endl;

    return 0;
}