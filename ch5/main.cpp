#include <iostream>

using namespace std;

int main()
{

    char ch;
    int count = 0;
    cout << "input: ";
    cin >> ch;
    while (ch != '#')
    {
        cout << ch;
        ++count;
        cin >> ch;
    }
    cout << endl << "count: " << count;

    return 0;
}