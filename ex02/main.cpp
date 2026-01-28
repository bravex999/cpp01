/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chnaranj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 12:58:28 by chnaranj          #+#    #+#             */
/*   Updated: 2026/01/28 12:58:31 by chnaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(){

std::string _string = "HI THIS IS BRAIN";
std::string* stringPTR = &_string;
std::string& stringREF = _string;

std::cout << "Address of string variable: " << &_string << std::endl;
std::cout << "Address held by stringPTR: " << stringPTR << std::endl;
std::cout << "Address held by stringREF: " << &stringREF << std::endl;

std::cout << "Value of string variable: " << _string << std::endl;
std::cout << "Value pointed to by PTR: " << *stringPTR << std::endl;
std::cout << "Value pointed to by REF: " << stringREF << std::endl;
return 0;
}


