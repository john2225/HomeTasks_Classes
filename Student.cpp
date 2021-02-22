#include "Student.h"

Student::Student()
{
    m_age = 0;
    m_first_name = "";
    m_last_name = "";
    m_subject_name = "";
};

Student::Student(
    const std::string& first_name,
    const std::string& last_name,
    const std::string& subject_name,
    const int age)
{
    m_first_name = first_name;
    m_last_name = last_name;
    m_subject_name = subject_name;
    m_age = age;
}

void Student::PrintStudentName()
{
    std::cout << "Student name is: " << m_first_name << std::endl;
}

void Student::PrintStudentLastName()
{
    std::cout << "Student last name is: " << m_last_name << std::endl;
}

void Student::PrintSubjectName()
{
    std::cout << "Subject name is: " << m_subject_name << std::endl;
}

void Student::PrintStudentAge()
{
    std::cout << "Student age is: " << m_age << std::endl;
}

void Student::PrintInfo()
{
    PrintStudentName();
    PrintStudentLastName();
    PrintSubjectName();
    PrintStudentAge();
}

int Student::GetAge() const
{
    return m_age;
}

std::string Student::GetName() const 
{
    return m_first_name;
}

std::string Student:: GetLastName() const
{
    return m_last_name;
};



    


 
