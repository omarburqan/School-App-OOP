#ifndef __PERSON_H__
#define __PERSON_H__
#include "string.h"
class Person{	
	public:
 		inline Person(const String&);
 		inline virtual ~Person();
	 	inline const String& getName() const;
	 	inline const size_t getId() const;	 
	 	inline virtual void action()=0;
 	private :
		const String m_name;
		size_t m_id;
		static size_t personCounter;
};
Person::Person(const String& name):m_name(name),m_id(++personCounter){}
Person::~Person(){ }
const String& Person::getName() const { return m_name; }
const size_t Person::getId() const { return m_id;}
#endif /*  __PERSON_H__ */
