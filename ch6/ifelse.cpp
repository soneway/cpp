#include <iostream>

using namespace std;

int main()
{
    char ch;
    cin.get(ch);
    cout << "ch: " << ch << endl;

    while (ch != '.')
    {
        if (ch == '\n')
        {
            cout << ch;
        }
        else
        {
            cout << ++ch;
        }
        cin.get(ch);
    }
    return 0;
}