// student.h

#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

#include <string>
#include "date.h"
#include "address.h"

class Student {

	private:
		Address* a;
		Date* d;
		std::string fName;
		std::string lName;
		std::string gpa;
		std::string ch;

	public:
		Student();
		~Student();
		void setFName( std::string x);
		std::string getFName();
		void setLName( std::string x);
		std::string getLName();
		void setGpa( std::string x);
		std::string getGpa();
		void setCH( std::string x);
		std::string getCH();
		void setAddress(Address* a);
		void setDate(Date* d);
		void fullReport(std::string currentLine);
		void shortReport(std::string currentLine);
};// end student

#endif
