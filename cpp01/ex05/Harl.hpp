/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:36:22 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/07 21:30:30 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>
#include <string>

class Harl{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public:
        void complain(std::string level);
    };

#endif