#include <iostream>
#include "string.h"

void String::my_strcopy(char * dest_ptr, const char * src_ptr)
{
	while (*src_ptr){ *dest_ptr++ = *src_ptr++; }
	*dest_ptr = '\0';  	 
}
String::String(const String &other){
//	cout << "i am out " << endl;
	if (this  != &other)  {
		length = other.length;
	    buffer = new char[length+1]; 
	    my_strcopy(buffer,other.buffer);
	}
}
String::String(const char *new_buffer)
{
	int counter = 0; 
    const char *temp = new_buffer;
    while(*temp++)
    {
        counter++;
    }
    length = counter;
    buffer = new char[counter+1];
    my_strcopy(buffer,new_buffer);
}

String String::operator=(const String& other){

	if (this  != &other)  {
		length = other.length;
		delete [] buffer;
	    buffer = new char[length+1]; 
	    my_strcopy(buffer,other.buffer);
	}
	return (*this);
}
String String::operator+=(const String& other){
	if (other.length == 0 )
		return (*this);
	char *tmpmain = new char [(length) + (other.length) + 1];
	size_t i = 0;
	while (i < length) {
		tmpmain[i]=buffer[i];
		++i;
	}
	size_t j = 0;
	while (j < other.length) {
		tmpmain[i++]=other.buffer[j++];
	}
	tmpmain[i]='\0';
	if (length > 0)
		delete [] buffer;
	length = i;
	buffer = tmpmain;
	String new_str(buffer);
	return new_str;
}
String operator+(const String& str1,const String& str2){
	if (str2.length == 0 )
		return (str1);
	if (str1.length == 0 )
		return (str2);
	char *tmpmain = new char[ (str1.length) + (str2.length) + 1 ];
	size_t i = 0;
	while (i < str1.length) {
		tmpmain[i]=str1.buffer[i];
		++i;
	}
	size_t j = 0;
	while (j < str2.length) {
		tmpmain[i++]=str2.buffer[j++];
	}
	tmpmain[i]='\0';
	String new_str(tmpmain);
	if (i>0)
		delete [] tmpmain;
	return new_str;
	
}
bool operator==(const String& str,const String &other){
	if(str.length != other.length)
    {
        return false;
    }
	for(unsigned int i = 0; i < str.length; i++)
    {
        if(str.buffer[i] != other.buffer[i])
        {
            return false;
        }
    }
	return true;
}

bool operator < (const String& str,const String &other){
	size_t min = str.length > other.length ? other.length : str.length;
	unsigned int i = 0;
	while (i < min) {
		if ( str.buffer[i] < other.buffer[i] )
			return true;
		else if( str.buffer[i] == other.buffer[i] )
			i++;
		else 
			return false;
	}
	return str.length < other.length;
}
bool operator>(const String& str,const String &other){
	return !( str <= other);
}
bool operator<=(const String& str,const String &other){
	return ( (str == other) || (str < other) );
}
bool operator>=(const String& str,const String &other){
	return ( str == other || (str > other) );
}

std::ostream & operator<<(std::ostream &os, const String &str){
	os << str.buffer;
	return os;
}


