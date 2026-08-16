#include <iostream>

int main()
{
    int a = 1;
    int &ref = a;
    std::cout << ref << "\n";
    ref = 2;
    std::cout << a << "\n";
    std::cout << ref << "\n";
}