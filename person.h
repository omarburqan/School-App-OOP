#ifndef __PERSON_H__
#define __PERSON_H__

class Person{	
	public:
 		Person(const std::string&);
 		virtual ~Person();
	 	const std::string& getName();
	 	size_t getId();	 
	 	virtual void action()=0;
 	private :
		const std::string& m_name;
		size_t m_id;
		static size_t personCounter;
};

#endif /*  __PERSON_H__ */
