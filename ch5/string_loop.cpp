#include <iostream>

using namespace std;

int main()
{
    cout << "input word: ";
    string word;
    cin >> word;

    for (int i = 0, len = word.size(); i < len; i++)
    {
        cout << word[i] << endl;
    }

    return 0;
}