#ifndef __TEACHER_H__
#define __TEACHER_H__
#include "person.h"
#include "string.h"
class Teacher:public Person{
	public:		
		inline Teacher(const String&,const String&);
		inline ~Teacher();
		inline void action();
	private:
		const String m_lesson;
};
Teacher::Teacher(const String& name,const String& lesson):Person(name),m_lesson(lesson){}

Teacher::~Teacher(){ }

void Teacher::action(){ std::cout << "Teaching : " << m_lesson << std::endl; }
#endif /* __TEACHER_H__ */ 
