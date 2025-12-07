#include <iostream>
#include <string>

int main(){

std::string _string = "HI THIS IS BRAIN";
std::string* stringPTR = &_string;
std::string& stringREF = _string;

std::cout << "Address of string variable: " << &_string << std::endl;
std::cout << "Address held by stringPTR: " << stringPTR << std::endl;
std::cout << "Address held by stringREF: " << &stringREF << std::endl;

std::cout << "Value of string variable: " << _string << std::endl;
std::cout << "Value pointed to be PTR: " << *stringPTR << std::endl;
std::cout << "Value pointed to be REF: " << stringREF << std::endl;
return 0;
}


