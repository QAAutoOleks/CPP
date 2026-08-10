#include <iostream>

double calculateSpeed(double distance, double time)
{
    return distance / time;
}

int main()
{
    double distance_meters = 89776.7;
    double time_seconds = 456.54;

    std::cout << "Speed = " << calculateSpeed(distance_meters, time_seconds) << "\n";
}