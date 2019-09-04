#include <iostream>
#include "school.h"


void School::addStudent(Student* student){ m_students.push_back(student); }

void School::addTeacher(Teacher* teacher){ m_teachers.push_back(teacher); }

size_t School::getNumOfStudents() const{ return m_students.size(); }

size_t School::getNumOfTeachers() const{ return m_teachers.size(); }

void School::pairTeacherToStudent(size_t ratio){
	std::list<Student*> temp_students ;
	std::vector<Student*>::iterator it_students = m_students.begin();
	std::vector<Teacher*>::iterator it_teachers = m_teachers.begin();
	for (; it_students != m_students.end(); ++it_students){ // divide each ratio of students to a teacher 
		temp_students.push_back(*it_students);
		if ( temp_students.size() == ratio ){
			m_map.insert(std::pair<std::string, std::list<Student*> >((*it_teachers)->getName(), temp_students));
			temp_students.clear();
			++it_teachers;
		}	
	}
	
	if (temp_students.size() != 0){ // if a teacher gets less than ratio 
			m_map.insert(std::pair<std::string, std::list<Student*> >((*it_teachers)->getName(), temp_students));
			temp_students.clear();
			++it_teachers;
	}
	while (it_teachers != m_teachers.end()){ // other teachers if not enough students will get a null list !!
		m_map.insert(std::pair<std::string, std::list<Student*> >((*it_teachers)->getName(), std::list<Student*>() ));
		++it_teachers;
	}
}
/*
std::list<Student*> School::getTeacherStudents(const std::string& teacherName) const{ 
	return m_map[teacherName];
}*/




