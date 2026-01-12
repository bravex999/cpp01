#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if(N <= 0 || name.empty())
        return NULL;
    int i;
    Zombie* _horde = new Zombie[N];
    for(i = 0; i < N; i++)
    {
        _horde[i].setterName(name);
    }
    return _horde;
}
