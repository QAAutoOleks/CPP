#include <iostream>

int main()
{
    std::string name = "John Doe";

    for (int i = 0; i < name.length(); i++)
    {
        std::cout << name[i] << "\n";
    }

    for (char c : name)
    {
        std::cout << c << std::endl;
    }
}