#include <iostream>
#include <string>
#include "string.h"

String::String(std::string name, std::string pass): name(name), password(pass)
{}

// cplusplus documentation

 /* The standard string class provides support for such objects with an interface similar to that of a standard container of bytes, but adding features specifically designed to operate with strings of single-byte characters.
 */

std::string
String::getName(){
	return name;
}

void 
String::setName(std::string n){
	this->name = n;
}

std::string
String::getPassword(){
	return password;
}

void
String::setPassword(std::string c){
	this ->password = c;
}
