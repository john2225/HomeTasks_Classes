#include "Student.h"
#include <iostream>
void fillStiudentParameters(
    std::string& name,
    std::string& last_name,
    std::string& subjet_name,
    int& age)
{
    std::cout << "Enter student parameters" << std::endl;
    std::cout << "first name: ";
    std::cin >> name;
    std::cout << "last name: ";
    std::cin >> last_name;
    std::cout << "subject name: ";
    std::cin >> subjet_name;
    std::cout << "age: ";
    std::cin >> age;
}

std::string compareStudents(const Student& first, const Student& second)
{
    std::cout << first.GetAge() << std::endl;
    std::cout << first.GetName() << std::endl;
    std::cout << second.GetAge() << std::endl;
    std::cout << second.GetName() << std::endl;

    return (first.GetAge() >= second.GetAge()) ? first.GetName() : second.GetName();
}
