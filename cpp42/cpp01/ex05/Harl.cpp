/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:39:31 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/07 18:25:28 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
        << std::endl;
}

void Harl::info(void){
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
        << std::endl;
}

void Harl::warning(void){
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
        << std::endl;
}

void Harl::error(void){
    std::cout << "This is unacceptable! I want to speak to the manager now."
        << std::endl;
}

void Harl::complain(std::string level){
    void (Harl::*ptrfc[4])()= {&Harl::error, &Harl::warning, &Harl::debug, &Harl::info};
    std::string orders[4]={"ERROR", "WARNING", "DEBUG", "INFO"};
    for (int i =0; i < 4; i++){
        if (level == orders[i]){
            (this->*ptrfc[i])();
            return ;
        }
    }
    std::cout << "wrong INPUUUUUUUT" << std::endl;
}