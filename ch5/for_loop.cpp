#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }

    cout << "input times: ";
    int times;
    cin >> times;
    for (int i = 0; i < times; i++)
    {
        cout << i << endl;
    }
    return 0;
}