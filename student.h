#ifndef __STUDENT_H__
#define __STUDENT_H__

#include "person.h"

class Student:public Person{
	public:		
		Student(const std::string&,unsigned char);
		~Student();
		void action();
	private:
		unsigned char m_grade;
};

#endif /*  __STUDENT_H__ */
