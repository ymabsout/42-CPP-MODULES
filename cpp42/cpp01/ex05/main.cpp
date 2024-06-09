/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 18:14:11 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/09 10:31:34 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (){
    Harl harl;
    harl.complain("WARNING");
    harl.complain("INFO");
    harl.complain("ERROR");
    harl.complain("DEBUG");
}
