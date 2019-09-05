#ifndef __SCHOOL_H__
#define __SCHOOL_H__

#include "student.h"
#include "teacher.h"
#include <vector>
#include <list>
#include <map>

typedef std::list<Student*> list_students;
typedef std::vector<Student*> students;
typedef std::vector<Teacher*> teachers;
typedef std::map<size_t, list_students > map;
typedef std::pair<size_t, list_students > pair;
typedef std::list<size_t> id_list;

class School{
	public:
		inline void addStudent(Student* student);
		inline void addTeacher(Teacher* teacher);
		inline size_t getNumOfStudents() const;
		inline size_t getNumOfTeachers() const;
		void pairTeacherToStudent(size_t ratio);
		inline list_students getTeacherStudents(const size_t& teacherId) const;
		id_list getTeacherNames() ; // extra helping method
		void removeStudent(size_t id);
		void removeTeacher(size_t id);
	private:
		students m_students;
		teachers m_teachers;
		map m_map;
};
void School::addStudent(Student* student){ m_students.push_back(student); }

void School::addTeacher(Teacher* teacher){  m_teachers.push_back(teacher); }

size_t School::getNumOfStudents() const{ return m_students.size(); }

size_t School::getNumOfTeachers() const{ return m_teachers.size(); }

list_students School::getTeacherStudents(const size_t& teacherId) const{ 
	return m_map.find(teacherId)->second;
}
#endif /*  __SCHOOL_H__ */ 
