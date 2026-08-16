#include <iostream>

struct Position
{
    double x;
    double y;
    double z;
};

void printPosition(Position position)
{
    std::cout << "x = " << position.x
              << ", y = " << position.y
              << ", z = " << position.z
              << std::endl;
}

int main()
{
    // This is an alternative way to initialize the struct
    // Position target{10.5, 20.0, 5.5};

    Position dronePosition;

    dronePosition.x = 10.5;
    dronePosition.y = 20.0;
    dronePosition.z = 5.5;

    printPosition(dronePosition);

    return 0;
}