//address.h

#ifndef ADDRESS_H_EXISTS
#define ADDRESS_H_EXISTS

#include <string>

class Address {

	private:
		std::string street1;
		std::string street2;
		std::string city;
		std::string state;
		std::string zip;

	public:
		Address();
		void setStreet1( std::string x);
		std::string getStreet1();
		void setStreet2( std::string x);
		std::string getStreet2();
		void setCity( std::string x);
		std::string getCity();
		void setState( std::string x);
		std::string getState();
		void setZip( std::string x);
		std::string getZip();
};// end Address()

#endif
