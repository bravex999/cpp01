#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
    Weapon weapon("sword");

    HumanA Chris = HumanA("Chris", weapon);
    Chris.attack();
    return 0;    
}