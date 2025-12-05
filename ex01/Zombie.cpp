#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie::Zombie()
{   
}
Zombie::~Zombie()
{
    std::cout "_name" << "destroyed" << std::endl;
}
void Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::setterName(std::string name)
{
    _name = name;
}