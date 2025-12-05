#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i;
    Zombie* _horde = new Zombie[N];
    for(i = 0; i < N; i++)
    {
        _horde[i].setterName(name);
    }
    return _horde;
}