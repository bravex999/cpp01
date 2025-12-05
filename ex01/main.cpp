#include "Zombie.hpp"
#include <iostream>
#include <string>

int main()
{
    int N = 5;
    Zombie* _horde;
    _horde = zombieHorde(N,"Horde");

    for(int i = 0; i < N; i++)
    {
        std::cout << "Z" << i + 1 << " ";
        _horde[i].announce();
    }
    delete[] _horde;
    return 0;
}