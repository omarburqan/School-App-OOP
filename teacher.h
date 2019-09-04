#ifndef __TEACHER_H__
#define __TEACHER_H__
#include "person.h"

class Teacher:public Person{
	public:		
		Teacher(const std::string&,const std::string&);
		~Teacher();
		void action();
	private:
		const std::string& m_lesson;
};

#endif /* __TEACHER_H__ */ 
