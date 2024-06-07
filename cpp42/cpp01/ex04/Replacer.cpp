/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 21:34:06 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/07 15:11:22 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

std::string Replacer::switcher(std::string &str){
    std::string res;
    size_t index = 0, finder;
    while ((finder = str.find(_s1, index)) != std::string::npos){
        res.append(str, index , finder - index);
        res += _s2;
        index = finder + _s2.length();
    }
    res.append(str, index, str.length() - index);
    return (res);
}

void Replacer::set_strings(const std::string &s1, const std::string &s2){
    this->_s1 = s1;
    this->_s2 = s2;
}
