/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 20:12:39 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/07 21:27:36 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

int main (int ac, char **av){
    if (ac != 4){
        std::cout << "Please enter correct number of arguments" 
            << std::endl;
        return (0);
    }
    std ::string op;
    std ::string file_out = av[1];
    std ::ifstream in(av[1]);
    if (!in){
        std::cout << "File opening error" << std::endl;
        return (0);
    }
    Replacer inout;
    inout.set_strings(av[2], av[3]);
    file_out +=  ".replace";
    std::ofstream out(file_out);
    while (std::getline(in, op)){
        out << inout.switcher(op) << std::endl;
    }
}