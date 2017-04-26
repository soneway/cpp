#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char str[50];
    int year;
    double p1, p2;

    ofstream outFile;
    outFile.open("test.txt");

    cout << "input str: ";
    cin.getline(str, 50);
    cout << "input year: ";
    cin >> year;
    cout << "input price: ";
    cin >> p1;
    p2 = p1 * 0.8;

    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "str: " << str << endl;
    cout << "year: " << year << endl;
    cout << "p1 $: " << p1 << endl;
    cout << "p2 $: " << p2 << endl;

    outFile << fixed;
    outFile.precision();
    outFile.setf(ios_base::showpoint);
    outFile << "str: " << str << endl;
    outFile << "year: " << year << endl;
    outFile << "p1 $: " << p1 << endl;
    outFile << "p2 $: " << p2 << endl;
    outFile.close();

    return 0;
}