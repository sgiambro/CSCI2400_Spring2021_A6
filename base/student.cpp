//student.cpp

#include <sstream>
#include <fstream>
#include <iostream>
#include <string>
#include "date.h"
#include "address.h"
#include "student.h"

Student::Student(){
	a = new Address();
	d = new Date();
        fName = " ";
        lName = " ";
        gpa = " ";
        ch = " ";
}//end Student

Student::~Student(){
        std::cout << "Student Gone" << "\n";
	delete a;
	delete d;
}//end delete Student

void Student::setFName( std::string x){
        fName = x;
}//end setFName

std::string Student::getFName(){
        return fName;
}//end getFName

void Student::setLName( std::string x){
        lName = x;
}//end setLName

std::string Student::getLName(){
        return lName;
}//end getLName

void Student::setGpa( std::string x){
        gpa = x;
}//end setGpa

std::string Student::getGpa(){
        return gpa;
}//end getGpa

void Student::setCH( std::string x){
        ch = x;
}//end setCH

std::string Student::getCH(){
        return ch;
}//end getCH

void Student::setAddress(Address* a){
	Student::a = a;
}//end setAddress

void Student::setDate(Date* d){
	Student::d = d;
}//end setDate

void Student::fullReport(std::string currentLine){

        std::stringstream ss;

        std::string word;

	ss.clear();
        ss.str("");

        ss.str(currentLine);
	
	 getline(ss, word, ',');
        setLName(word);

        getline(ss, word, ',');
        setFName(word);

        getline(ss, word, ',');
        a->setStreet1(word);

        getline(ss, word, ',');
        a->setStreet2(word);

        getline(ss, word, ',');
        a->setCity(word);

        getline(ss, word, ',');
        a->setState(word);

        getline(ss, word, ',');
        a->setZip(word);

        getline(ss, word, ',');
        d->setBD(word);

        getline(ss, word, ',');
        d->setGrad(word);

        getline(ss, word, ',');
        setGpa(word);

        getline(ss, word, ',');
        setCH(word);


	std::ofstream outFile;
	outFile.open("fullReport.txt",std::ios_base::app);	


	outFile << "NAME: " << lName << "," << fName ;
	outFile << " DOB: " << d->getBD();
	outFile << " ADDRESS 1 & 2: " << a->getStreet1() << a->getStreet2() << "," << a->getCity() << "," << a->getState() << "," << a->getZip();
	outFile << " FINISH DATE: " << d->getGrad();
	outFile <<  " GPA: " << gpa;
	outFile << " CREDITS: " << ch << "\n";

	outFile.close();
}//end fullReport


void Student::shortReport(std::string currentLine){

        std::stringstream ss;

        std::string word;


        ss.clear();
        ss.str("");

        ss.str(currentLine);

         getline(ss, word, ',');
        setLName(word);

        getline(ss, word, ',');
        setFName(word);


	std::ofstream outFile;
        outFile.open("shortReport.txt" , std::ios_base::app);

	outFile << "NAME: " << lName << "," << fName << "\n";

	outFile.close();
}//end shortReport


