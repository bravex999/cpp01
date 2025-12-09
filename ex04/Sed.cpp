#include "Sed.hpp"
#include <string>
#include <iostream>
#include <fstream>

Sed::Sed(std::string file):_file(file){}
Sed::~Sed(){}

void Sed::replaceWord(std::string s1, std::string s2)
{
    std::ifstream infile(_file.c_str());
    if (!infile.is_open())
    {
        std::cerr << "Error: cannot open input file" << std::endl;
        return;
    }

    std::string outName = _file + ".replace";
    std::ofstream outfile(outName.c_str());
    if (!outfile.is_open())
    {
        std::cerr << "Error: cannot create output file" << std::endl;
        return;
    }

    if (s1.empty())
    {
        std::cerr << "Error: search string is empty" << std::endl;
        return;
    }

    std::string line;
    while (std::getline(infile, line))
    {
        size_t pos = 0;
        size_t found;
        while ((found = line.find(s1, pos)) != std::string::npos)
        {
            outfile << line.substr(pos, found - pos);
            outfile << s2;
            pos = found + s1.length();
        }
        outfile << line.substr(pos);
        outfile << std::endl;
    }
}