#ifndef __SCHOOL_H__
#define __SCHOOL_H__

#include "student.h"
#include "teacher.h"
#include <vector>
#include <list>
#include <map>

class School{
	public:
		void addStudent(Student* student);
		void addTeacher(Teacher* teacher);
		size_t getNumOfStudents() const;
		size_t getNumOfTeachers() const;
		void pairTeacherToStudent(size_t ratio);
		std::list<Student*> getTeacherStudents(const std::string& teacherName) const;
	
	private:
		std::vector<Student*> m_students;
		std::vector<Teacher*> m_teachers;
		std::map<std::string, std::list<Student*> > m_map;

};


#endif /*  __SCHOOL_H__ */ 
