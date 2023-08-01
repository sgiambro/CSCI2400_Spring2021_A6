//address.cpp

#include <string>
#include "address.h"

Address::Address(){
	street1 = " ";
	street2 = " ";
	city = " ";
	state = " ";
	zip = " ";
}//end Address

void Address::setStreet1( std::string x){
        street1 = x;
}//end setStreet1

std::string Address::getStreet1(){
        return street1;
}//end getStreet1

void Address::setStreet2( std::string x){
        street2 = x;
}//end setStreet2

std::string Address::getStreet2(){
        return street2;
}//end getStreet2

void Address::setCity( std::string x){
        city = x;
}//end setCity

std::string Address::getCity(){
        return city;
}//end getcity

void Address::setState( std::string x){
        state = x;
}//end setState

std::string Address::getState(){
        return state;
}//end getState

void Address::setZip( std::string x){
        zip = x;
}//end setZip

std::string Address::getZip(){
        return zip;
}//end getZip



