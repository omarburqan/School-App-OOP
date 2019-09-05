#ifndef __STUDENT_H__
#define __STUDENT_H__

#include "person.h"
#include "string.h"

class Student:public Person{
	public:		
		inline Student(const String&,unsigned char);
		inline ~Student();
		inline void action();
	private:
		unsigned char m_grade;
};
Student::Student(const String& name,unsigned char grade):Person(name),m_grade(grade){}

Student::~Student(){ }

void Student::action(){ std::cout << "Grade is : " << static_cast<int>(m_grade) << std::endl; }
#endif /*  __STUDENT_H__ */
