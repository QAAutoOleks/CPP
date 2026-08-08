#include <iostream>

int main()
{
    double speed_mps = 150;
    double time_seconds = 60;

    double distance = speed_mps * time_seconds;
    double newSpeed = distance / 100;

    std::cout << "Distance = " << distance << "\n";
    std::cout << "New speed = " << newSpeed << "\n";
}