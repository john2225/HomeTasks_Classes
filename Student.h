#ifndef __Student__
#define __Student__
#include <iostream>
#include <string>

class Student
{
public:
    Student();
    Student(
        const std::string& first_name,
        const std::string& last_name,
        const std::string& subject_name,
        const int age);
    ~Student() = default; /* c++ 11 */
    
    void PrintStudentName();
    void PrintStudentLastName();
    void PrintSubjectName();
    void PrintStudentAge();
    void PrintInfo();
    int GetAge() const;
    std::string GetName() const;
    std::string GetLastName() const;
    
private:
    int m_age;
    std::string m_first_name;
    std::string m_last_name;
    std::string m_subject_name;
    
};



#endif

