//date.h

#ifndef DATE_H_EXISTS
#define DATE_H_EXISTS

#include <string>

class Date {
	private:
		std::string bd;
		std::string grad;
	public:
		Date();
		void setBD( std::string x);
		std::string getBD();
		void setGrad( std::string x);
		std::string getGrad();
};// end Date()

#endif
