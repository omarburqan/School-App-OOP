#include <iostream>
#include "teacher.h"
		
Teacher::Teacher(const std::string& name,const std::string& lesson):Person(name),m_lesson(lesson){}

Teacher::~Teacher(){ std::cout << "Teacher Destructor" << std::endl; }

void Teacher::action(){ std::cout << "Teaching : " << m_lesson << std::endl; }
