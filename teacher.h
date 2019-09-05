#ifndef __TEACHER_H__
#define __TEACHER_H__
#include "person.h"

class Teacher:public Person{
	public:		
		inline Teacher(const std::string&,const std::string&);
		inline ~Teacher();
		inline void action();
	private:
		const std::string m_lesson;
};
Teacher::Teacher(const std::string& name,const std::string& lesson):Person(name),m_lesson(lesson){}

Teacher::~Teacher(){ }

void Teacher::action(){ std::cout << "Teaching : " << m_lesson << std::endl; }
#endif /* __TEACHER_H__ */ 
