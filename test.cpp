#include "test.h"
#include <iostream>
#include "person.h"
#include "student.h"
#include "teacher.h"
#include "school.h"
#include <vector>
#include <list>
#include <map>

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
	Student s8("5ara",100); 
	
	Teacher t1("shaheera","biology");
	Teacher t2("baheera","chemisty");
	Teacher t3("zaheera","physics");
	
	School c;
	c.addStudent(&s1);
	c.addStudent(&s2);
	c.addStudent(&s3);
	c.addStudent(&s4);
	c.addStudent(&s5);
	c.addStudent(&s6);
	c.addStudent(&s7);
	c.addStudent(&s8);
	
	c.pairTeacherToStudent(3);
	
	
	
	
	
}

