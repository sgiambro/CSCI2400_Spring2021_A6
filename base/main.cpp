//main.cpp

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include "date.h"
#include "address.h"
#include "student.h"



int main(){

	std::ifstream inFile;
	std::string currentLine;
	std::stringstream ss;

	std::string line;

	std::string word;

	Student *s = new Student;

	inFile.open("student.dat");
	
	for(int i=0; i<50; i++){

	getline(inFile, currentLine);
	
	ss.clear();

	ss.str("");


	ss.str(currentLine);

	line = ss.str();
	
	s->fullReport(line);
	s->shortReport(line);

	}//end for

	delete s;

	inFile.close();

}//end main
