/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:47:12 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/03 20:53:29 by ymabsout         ###   ########.fr       */
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
	while (std::cin >> cmd) {
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
				std::cin >> k;
				while (std::cin.fail() || k <= 0 || k > 8 || !book.check_contact(k - 1)){
					if (std::cin.eof())
						exit(0);
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "Enter a correct index please" << std::endl;
					std::cin >> k;
				}
			book.display_contact_details(k - 1);
			}
		} else {
			std::cout << "Choose ADD , SEARCH or EXIT" << std::endl;
		}
	}
	return (0);
}
