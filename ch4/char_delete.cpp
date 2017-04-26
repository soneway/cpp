#include <iostream>

using namespace std;

char * getname()
{
    char tmp[80];
    cout << "input name: ";
    cin >> tmp;
    char * ps = new char[strlen(tmp) + 1];
    strcpy(ps, tmp);
    return ps;
}

int main()
{
    char * name;
    name = getname();

    cout << name << " at " << (int *) name << endl;
    delete[] name;

    name = getname();
    cout << name << " at " << (int *) name << endl;
    delete[] name;

    return 0;
}