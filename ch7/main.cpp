#include <iostream>
#include <cmath>

using namespace std;

struct rect
{
    double x;
    double y;
};

struct polar
{
    double distance;
    double angle;
};

void show_polar(polar polar1)
{
    const double Rad_to_deg = 57.2958;
    cout << polar1.distance << "distance " << polar1.angle * Rad_to_deg << "angle" << endl;
}

polar rect_to_polar(rect rect1)
{
    polar polar1;
    polar1.distance = sqrt(rect1.x * rect1.x + rect1.y * rect1.y);
    polar1.angle = atan2(rect1.x, rect1.y);
    return polar1;
}

int main()
{
    rect rect1;
    polar polar1;
    while (cin >> rect1.x >> rect1.y)
    {
        polar1 = rect_to_polar(rect1);
        show_polar(polar1);
    }
    show_polar(polar1);

    return 0;
}