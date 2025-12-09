#include "Sed.hpp"
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    if(argc != 4)
    {
        std::cerr << "You need three parameters" << std::endl;
        return 1;
    }    
    Sed _replacer(argv[1]);
    _replacer.replaceWord(argv[2],argv[3]);
    return 0;
        
}

