#ifndef SED_HPP
# define SED_HPP
#include <iostream>
#include <string>

class Sed
{
    private:
        std::string _file;
    public:
        Sed(std::string file);
        ~Sed();

        void replaceWord(std::string s1, std::string s2);
    

};
#endif