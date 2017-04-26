#include <iostream>

using namespace std;

int sum_arr(int arr[], int count)
{
    int total = 0;
    cout << "arr addr: " << arr << endl;
    cout << "sizeof arr: " << sizeof(arr) << endl;

    for (int i = 0; i < count; i++)
    {
        total += arr[i];
    }
    return total;
}

int main()
{
    int cookies[] = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << "cookies addr: " << cookies << endl;
    cout << "sizeof cookies: " << sizeof(cookies) << endl;

    int sum = sum_arr(cookies, 3);
    int sum2 = sum_arr(cookies + 4, 4);
    return 0;
}