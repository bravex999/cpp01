#include <iostream>
#include <string>

int main(){

std::string _string = "HI THIS IS BRAIN";
std::string* stringPTR = &_string;
std::string& stringREF = _string;

std::cout << &_string << std::endl;
std::cout << stringPTR << std::endl;
std::cout << &stringREF << std::endl;

std::cout << _string << std::endl;
std::cout << *stringPTR << std::endl;
std::cout << stringREF << std::endl;
return 0;
}

