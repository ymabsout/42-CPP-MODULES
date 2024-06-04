/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:47:12 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/04 15:55:59 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "header.hpp"
#include <ios>
#include <limits>
#include <string>

int main() {
	PhoneBook book;
	std::string cmd;

	std::cout << "Enter your command" << std::endl;
	while (std::getline(std::cin >> std::ws, cmd)) {
		if (cmd == "ADD"){
			Contact t;
			t.set_firstname(get_valid_input("Enter User First Name"));
			t.set_lastname(get_valid_input("Enter User Last Name"));
			t.set_nickname(get_valid_input("Enter User Nickname"));
			t.set_phone_number(get_valid_number("Enter User Phone Number"));
			t.set_secret(get_valid_input("Enter User Secret"));
			book.add_contact(t);
			if (!std::cin.eof())
				std::cout << "Enter your command" << std::endl;
		} 
		else if (cmd == "EXIT")
			break ;
		else if (cmd == "SEARCH"){
			book.display_contacts();
			if (book.check_contact(0)){
				std::cout << "Enter index of the contact" << std::endl;
				int k;
				std::string c;
				std::getline(std::cin >> std::ws, c);
				k = book.check_number(c);
				while (k <= 0 || k > 8 || !book.check_contact(k - 1)){
					if (std::cin.eof())
						exit(0);
					std::cout << "Enter a correct index please" << std::endl;
					std::string p;
					std::getline(std::cin, p);
					k = book.check_number(p);
				}
			book.display_contact_details(k - 1);
			}
		} else {
			std::cout << "Choose ADD , SEARCH or EXIT" << std::endl;
		}
	}
	return (0);
}
