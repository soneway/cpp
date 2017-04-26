#include <iostream>

using namespace std;

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    inflatable * ps = new inflatable();
    cin.get(ps->name, 20);
    cin >> (*ps).volume;
    cin >> ps->price;

    cout << (*ps).name << endl;
    cout << ps->volume << endl;
    cout << (*ps).price << endl;

    delete ps;

    return 0;
}