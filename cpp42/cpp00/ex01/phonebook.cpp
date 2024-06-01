/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 14:44:34 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/01 18:08:00 by ymabsout         ###   ########.fr       */
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

std::string contact::get_secret()const{
    return(this->secret);
}

void    contact::set_firstname(std::string first_name){
    contact::first_name = first_name;
}

void    contact::set_secname(std::string second_name){
    contact::last_name = second_name;
}

void contact::set_nick(std::string nickname){
    contact::nickname = nickname;
}

void contact::set_number(std::string number){
    contact::phone_number = number;
}

void contact::set_secret(std::string deep_sec){
    contact::secret = deep_sec;
}
