#include <iostream>

int main()
{
    double speed = 34.9;

    if (speed > 100)
    {
        std::cout << "Speed is too high\n";
    }
    else if (speed >= 50)
    {
        std::cout << "Speed is normal\n";
    }
    else
    {
        std::cout << "Speed is low\n";
    }
}