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
    Student student1;
    student1.name = "John Doe";
    student1.age = 20;
    student1.mail = "johndoe@mail.com";
    student1.phone = 1234567890;
    printStudent(student1);
}