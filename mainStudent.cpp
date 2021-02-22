#include <iostream>
#include "helpersStudent.h"
#include "Student.h"

int main()
{
    std::string name;
    std::string last_name;
    std::string subjet_name;
    int age;
    /* Task 34 */
    fillStiudentParameters(name, last_name, subjet_name, age);
    Student first_student(name, last_name, subjet_name, age);
    /* Task 35 */
    fillStiudentParameters(name, last_name, subjet_name, age);
    Student second_student(name, last_name, subjet_name, age);
    std::cout << compareStudents(first_student, second_student) << std::endl;
    
    /* Task 36 */
    int avg_age = (first_student.GetAge() + second_student.GetAge()) / 2;
    Student third_student(
        first_student.GetName(),
        second_student.GetLastName(),
        "",
        avg_age);
    
    third_student.PrintInfo();
    
    
    /* PrintInfo(); to print student information */
    return 0;
}

