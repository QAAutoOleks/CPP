#include <iostream>

double calculateSpeed(double distance, double time)
{
    return distance / time;
}

void printSpeed(double speed)
{
    std::cout << "Speed = " << speed << "\n";
}

int main()
{
    double distance_meters = 89776.7;
    double time_seconds = 456.54;

    printSpeed(calculateSpeed(distance_meters, time_seconds));
}