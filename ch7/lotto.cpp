#include <iostream>

using namespace std;

long double able(unsigned num, unsigned picks)
{
    long double rs = 1.0;
    long double n;
    unsigned p;
    for (n = num, p = picks; p > 0; n--, p--)
    {
        rs = rs * n / p;
    }
    return rs;
}

int main()
{
    double total, choices;
    while (cin >> total >> choices && choices <= total)
    {
        cout << "you have one choice in " << able(total, choices);
    }
    return 0;
}