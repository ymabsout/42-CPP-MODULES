/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 06:05:51 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/19 08:42:37 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
    public:
    FragTrap();
    FragTrap(const std::string &name);
    ~FragTrap();
    FragTrap(const FragTrap &objs);
    FragTrap &operator=(const FragTrap &objs);
    void highFivesGuys(void);
    void attack(const std::string& target);
};

#endif

