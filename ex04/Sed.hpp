/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chnaranj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 13:00:12 by chnaranj          #+#    #+#             */
/*   Updated: 2026/01/28 13:00:14 by chnaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP
#include <iostream>
#include <string>

class Sed
{
    private:
        std::string _file;
    public:
        Sed(std::string file);
        ~Sed();

        void replaceWord(std::string s1, std::string s2);
    

};
#endif
