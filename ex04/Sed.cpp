#include "Sed.hpp"
#include <string>
#include <iostream>
#include <fstream>

Sed::Sed(std::string file):_file(file){}
Sed::~Sed(){}

void Sed::replaceWord(std::string s1, std::string s2)
{
    std::string col;
    std::ifstream _infile(_file.c_str());
    std::getline(_infile, col);
    std::size_t size = col.find(s1);

    
}