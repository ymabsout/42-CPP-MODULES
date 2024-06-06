/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:22:29 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/06 11:33:12 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(){
    std::string str =  "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    std::cout << "The memory address of the string variable: " <<
        &str << std::endl <<"The memory address held by stringPTR: " <<
        stringPTR << std::endl << "The memory address held by stringREF: " <<
        &stringREF << std::endl;
    std::cout << "The value of the string variable: " << str << std::endl
        << "The value pointed to by stringPTR: " << *stringPTR << std::endl
        << "The value pointed to by stringREF: " << stringREF << std::endl;
}