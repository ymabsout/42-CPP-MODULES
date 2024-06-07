/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 19:30:06 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/07 20:43:07 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void){
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
        << std::endl;
}

void Harl::info(void){
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
        << std::endl;
}

void Harl::warning(void){
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. \nI’ve been coming for years whereas you started working here since last month."<< std::endl;
}

void Harl::error(void){
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now."
        << std::endl;
}

void Harl::complain(std::string level){
    std::string levels[4]={"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*ptrfunc[4])()={&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int index =-1;
    for (int i =0 ; i < 4; i++){
        if (levels[i] == level){
            index = i;
            break;
        }
    }
    switch(index){
        case 0:
        (this->*ptrfunc[0])();
        std::cout << std::endl;
        case 1:
        (this->*ptrfunc[1])();
        std::cout << std::endl;
        case 2:
        (this->*ptrfunc[2])();
        std::cout << std::endl;
        case 3:
        (this->*ptrfunc[3])();
        std::cout << std::endl;
        break;
        default: 
        std::cout << "I am not sure how tired I am today... "<< std::endl;
    }
}
