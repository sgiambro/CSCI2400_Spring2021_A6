//date.cpp

#include <string>
#include "date.h"

Date::Date(){
	Date::bd = " ";
	Date::grad = " ";
}//end Date

void Date::setBD( std::string x){
	bd = x;
}//end setBD

std::string Date::getBD(){
	return bd;
}//end getBD

void Date::setGrad( std::string x){
	grad = x;
}//end setGrad

std::string Date::getGrad(){
	return grad;
}//end getGrad
