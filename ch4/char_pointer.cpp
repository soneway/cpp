#include <iostream>

using namespace std;

int main()
{
    char animal[20] = "cat";
    const char * bird = "wren";
    char * ps;

    cout << animal << " and " << bird << endl;
    //  << ps << endl;

    cout << "input animal" << endl;
    cin >> animal;
    // cin >> ps;

    ps = animal;
    cout << ps << endl;

    cout << "before using strcpy()" << endl;
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;

    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);

    cout << "after using strcpy()" << endl;
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;

    return 0;
}