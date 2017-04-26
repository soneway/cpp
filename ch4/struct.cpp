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
    user sjj = {
        20,
        1500.3,
        "songjj"
    };

    user lxy {
        salary: 16.4,
        name: "lixy",
        age: 30
    };

    cout << sjj.age << endl;
    cout << sjj.salary << endl;
    cout << sjj.name << endl;

    cout << lxy.name << endl;
    cout << lxy.salary << endl;
    cout << lxy.age << endl;

    struct
    {
        int x;
        int y;
    } postion;
    postion.x = 10;
    cout << postion.x << endl;

    return 0;
}