#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    cout << "input secneds: ";
    float secs;
    cin >> secs;

    clock_t delay = secs * CLOCKS_PER_SEC;
    cout << "start\n";
    clock_t start = clock();
    while (clock() - start < delay)
    { ;
    }
    cout << "done\n";

    return 0;
}