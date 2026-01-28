/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chnaranj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 12:58:53 by chnaranj          #+#    #+#             */
/*   Updated: 2026/01/28 12:58:55 by chnaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(std::string name):_name(name), _weapon(NULL){}
HumanB::~HumanB(){}
void HumanB::setWeapon(Weapon& weapon)
{
    _weapon = &weapon;
}
void HumanB::attack(void)
{
    if(_weapon != NULL)
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
    return;    
}


