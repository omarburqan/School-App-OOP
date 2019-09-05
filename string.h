#ifndef __STRING_H__
#define __STRING_H__

#include <cstddef>

class String{
	
	public :
        String(const String &);
        String(const char * new_buffer = "");
        inline ~String();
        inline size_t getLength() const;
        inline const char& operator[] (unsigned int) const;  
		inline char* getBuffer();
		
        String operator =(const String&);
        String operator += (const String&);
        friend String operator+(const String&,const String&);
        
        friend bool operator==(const String &,const String &);
        friend bool operator<=(const String &,const String &);
        friend bool operator>=(const String &,const String &);
        friend bool operator<(const String &,const String &);
        friend bool operator>(const String &,const String &);
        friend std::ostream& operator<<(std::ostream &os, const String &);
 
	private :
		size_t length; 
        char * buffer;
        void my_strcopy(char *, const char *);
};
String::~String(){
	delete [] buffer;
}
size_t String::getLength() const{ 
	return length;
}
const char& String::operator[] (unsigned int index)const{
	//if (index < length) TODO 
		return buffer[index-1];

}
char* String::getBuffer(){
	return buffer;
}
#endif /* __STRING_H__ */
