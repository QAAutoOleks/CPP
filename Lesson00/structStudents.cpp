#include <iostream>
#include <string>

struct Student
{
    std::string name;
    int age;
    std::string mail;
    int phone;
};

void printStudent(Student student)
{
    std::cout << "Name: " << student.name
              << "\n Age: " << student.age
              << "\n Mail: " << student.mail
              << "\n Phone: " << student.phone << "\n";
}

int main()
{
    Student students[3];
    students[0] = {"John", 20, "john@mail.com", 123};
    students[1] = {"Jane", 22, "jane@mail.com", 125};
    students[2] = {"Mike", 21, "mike@mail.com", 126};

    for (int i = 0; i < 3; i++)
    {
        printStudent(students[i]);
    }
}