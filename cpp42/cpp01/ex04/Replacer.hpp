/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 20:12:48 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/07 13:17:25 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <fstream>
#include <iomanip>
#include <ios>
class Replacer{
    private:
        std::string _s2;
        std::string _s1;
    public:
        std::string switcher(std::string &str);
        void    set_strings(const std::string &s1, const std::string &s2);
};