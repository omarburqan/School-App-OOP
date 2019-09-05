#include <iostream>
#include "school.h"


void School::pairTeacherToStudent(size_t ratio){
	m_lastRatio = ratio;
	m_map.clear();
	if (m_teachers.size() == 0 )
		return;
	list_students temp_students ;
	students::iterator it_students = m_students.begin();
	teachers::iterator it_teachers = m_teachers.begin();
	if(ratio >0) {
		for (; it_students != m_students.end() && it_teachers!= m_teachers.end(); ++it_students){ // divide each ratio of students to a teacher 
			temp_students.push_back(*it_students);
			if ( temp_students.size() == ratio  ){
				m_map[(*it_teachers)->getId()]=  temp_students;
				temp_students.clear();
				++it_teachers;
			}	
		}
		if (temp_students.size() != 0 ){ // if a teacher gets less than ratio error when not enough teachers and there is students
			m_map[(*it_teachers)->getId()]=  temp_students;
			temp_students.clear();
			++it_teachers;
		}
	}
	
	while (it_teachers != m_teachers.end()){ // other teachers if not enough students will get a null list !!
				m_map[(*it_teachers)->getId()]=  temp_students;
		++it_teachers;
	}
}

id_list School::getTeacherNames() {
	id_list t_names;
	for (teachers::iterator it_teachers = m_teachers.begin(); 
							it_teachers !=  m_teachers.end(); ++it_teachers){
		t_names.push_back((*it_teachers)->getId());
	}
	return t_names;
}
void School::removeTeacher(size_t id){
	teachers::iterator it_teachers;
	for (it_teachers = m_teachers.end() - 1; 
							it_teachers >=  m_teachers.begin(); --it_teachers) { 
        if ( (*it_teachers)->getId() == id ){
				m_teachers.erase((it_teachers));
			    pairTeacherToStudent(m_lastRatio);
		}
    }   
}
void School::removeStudent(size_t id){
	for (students::iterator it_students = m_students.end() -1; 
							it_students >=  m_students.end(); --it_students) { 
        if ( (*it_students)->getId() == id ){
				m_students.erase((it_students));
			    pairTeacherToStudent(m_lastRatio);
		}
    }   
    
}


