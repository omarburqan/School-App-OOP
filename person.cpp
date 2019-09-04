#include <iostream>
#include "person.h"

size_t Person::personCounter=0;

Person::Person(const std::string& name):m_name(name),m_id(personCounter++){}

Person::~Person(){ std::cout << "Person Destructor" << std::endl ;}

const std::string& Person::getName(){ return m_name; }

size_t Person::getId() { return m_id;}
