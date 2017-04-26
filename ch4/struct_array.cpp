#include <iostream>

using namespace std;

struct user
{
    int age;
    float salary;
    string name;
};

int main()
{
    user users[2] = {
        {
            20,
            1500.3,
            "songjj"
        },
        {
            salary: 16.4,
            name: "lixy",
            age: 30
        }
    };

    cout << users[0].age << endl;
    cout << users[0].salary << endl;
    cout << users[0].name << endl;

    cout << users[1].name << endl;
    cout << users[1].salary << endl;
    cout << users[1].age << endl;

    struct
    {
        int x;
        int y;
    } postion;
    postion.x = 10;
    cout << postion.x << endl;

    return 0;
}