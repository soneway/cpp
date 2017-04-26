#include <iostream>

using namespace std;

struct travel_time
{
    int hours;
    int mins;
};

const int MINS_PER_HOUR = 60;

travel_time sum(travel_time t1, travel_time &t2)
{
    travel_time total;
    total.mins = (t1.mins + t2.mins) % MINS_PER_HOUR;
    total.hours = t1.hours + t2.hours + (t1.mins + t2.mins) / MINS_PER_HOUR;

    t1.hours = 1;
    t2.hours = 1;

    return total;
}

void show_time(travel_time t)
{
    cout << t.hours << "hours " << t.mins << "mins" << endl;
}

int main()
{
    travel_time time1 = travel_time();
    time1.hours = 4;
    time1.mins = 55;

    travel_time time2 = {5, 33};
    travel_time time3 = sum(time1, time2);
    show_time(time3);

    show_time(time1);
    show_time(time2);

    return 0;
}