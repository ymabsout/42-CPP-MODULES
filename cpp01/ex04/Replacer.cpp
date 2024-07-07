/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 21:34:06 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/09 18:40:04 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

std::string Replacer::switcher(std::string &str){
    std::string res;
    size_t index = 0, finder;
    while ((finder = str.find(_s1, index)) != std::string::npos){
        res.append(str, index , finder - index);
        res += _s2;
        index = finder + _s1.length();
    }
    res.append(str, index, str.length() - index);
    return (res);
}

int Replacer::set_strings(const std::string &s1, const std::string &s2){
    if (s1.empty() || s2.empty())
        return (0);
    this->_s1 = s1;
    this->_s2 = s2;
    return (1);
}
