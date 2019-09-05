#include "test.h"
#include <iostream>

#include <string>
#include <vector>
#include <list>
#include <map>
#include "person.h"
#include "student.h"
#include "teacher.h"
#include "school.h"

using std::cout;
using std::endl;

void test(){
	Student s1("omar",80);
	Student s2("montaser",60);
	Student s3("ibrahim",70);
	Student s4("m7md",80);
	Student s5("fat7i",30);
	Student s6("sob7i",40);
	Student s7("sameer",10);
	Student s8("zara",100); 
	
	Teacher t1("saheera","biology");

	Teacher t2("zaheera","chemisty");


	Teacher t3("baheera","physics");
	
	School c;
	c.addStudent(&s1);
	c.addStudent(&s2);
	c.addStudent(&s3);
	c.addStudent(&s4);
	c.addStudent(&s5);
	c.addStudent(&s6);
	c.addStudent(&s7);
	c.addStudent(&s8);
	
	c.addTeacher(&t1);
	c.addTeacher(&t2);
	c.addTeacher(&t3);
	
	c.pairTeacherToStudent(3);
	id_list names = c.getTeacherNames();
	for(id_list::iterator iter1 = names.begin(); iter1 != names.end(); iter1++){
		cout << "Teacher: "<< *iter1 << endl;
		list_students ts = c.getTeacherStudents(*iter1);
		for(list_students::iterator iter = ts.begin(); iter != ts.end(); iter++){
			cout << "    Student " << (*iter)->getName() << "    ";
		    (*iter)->action() ;
		}
	}
	
	c.removeTeacher(11);
	cout  << endl <<"teacher size after erasing : " << c.getNumOfTeachers() << endl;	
	c.removeStudent(8);
	cout  << "student size after erasing : " << c.getNumOfStudents() << endl << endl;
	
	
	names = c.getTeacherNames();
	for(id_list::iterator iter1 = names.begin(); iter1 != names.end(); iter1++){
		cout << "Teacher: "<< *iter1 << endl;
		list_students ts = c.getTeacherStudents(*iter1);
		for(list_students::iterator iter = ts.begin(); iter != ts.end(); iter++){
			cout << "    Student " << (*iter)->getName() << "    ";
		    (*iter)->action() ;
		}
	}

	
}



