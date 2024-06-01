/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 14:44:34 by ymabsout          #+#    #+#             */
/*   Updated: 2024/05/24 18:20:06 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

std::string contact::get_firstname()const{
    return(this->first_name);
}

std::string contact::get_last_name()const{
    return(this->last_name);

}
std::string contact::get_nickname()const{
    return(this->nickname);
}

std::string contact::get_number()const{
    return(this->phone_number);
}
void    contact::set_firstname(std::string l){
    contact::secret = l;
}
void    contact::set_secname(std::string l){
    contact::last_name = l;
}