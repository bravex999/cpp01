#include "Sed.hpp"
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    if(argc != 4)
        std::cerr << "You need three parameters";
    Sed _replacer(argv[1]);
    std::cout << argv[1];
    return 0;
    
}

