#include <iostream>

void addTen(double &speed)
{
    speed += 10;
}

int main()
{
    double speed = 50;

    addTen(speed);

    std::cout << speed << "\n";

    return 0;
}