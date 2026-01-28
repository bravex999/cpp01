/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chnaranj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 12:59:05 by chnaranj          #+#    #+#             */
/*   Updated: 2026/01/28 12:59:09 by chnaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>
#include <iostream>

 Weapon::Weapon(std::string type):_type(type){}
 Weapon::~Weapon(){}

const std::string& Weapon::getType(void) const
{
   return _type;  
}
void Weapon::setType(std::string type)
{
    _type = type;  
}
