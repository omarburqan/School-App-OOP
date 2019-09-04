#include <iostream>
#include "student.h"

Student::Student(const std::string& name,unsigned char grade):Person(name),m_grade(grade){}

Student::~Student(){ std::cout << "Student Destructor" << std::endl; }

void Student::action(){ std::cout << "Student Grade is : " << static_cast<int>(m_grade) << std::endl; }
   

