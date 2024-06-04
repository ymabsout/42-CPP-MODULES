/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 14:44:34 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/04 15:56:06 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"
#include <cstdlib>
#include <string>

void Contact::set_firstname(const std::string& first_name) {
	this->first_name = first_name;
}

void Contact::set_lastname(const std::string& last_name) {
	this->last_name = last_name;
}

void Contact::set_nickname(const std::string& nickname) {
	this->nickname = nickname;
}

void Contact::set_phone_number(const std::string& phone_number) {
	this->phone_number = phone_number;
}

void Contact::set_secret(const std::string& secret) {
	this->secret = secret;
}

std::string Contact::get_firstname() const {
	return this->first_name;
}

std::string Contact::get_lastname() const {
	return this->last_name;
}

std::string Contact::get_nickname() const {
	return this->nickname;
}

std::string Contact::get_phone_number() const {
	return this->phone_number;
}

std::string Contact::get_secret() const {
	return this->secret;
}

void PhoneBook::add_contact(const Contact& new_contact) {
	contacts[current_index] = new_contact;
	current_index = (current_index + 1) % contacts.size();
	if (this->track <= current_index)
		this->track = current_index;
}

void PhoneBook::display_contacts() const {
	for (size_t i = 0; i < this->track; ++i) {
		std::string f = contacts[i].get_firstname();
		std::string l = contacts[i].get_lastname();
		std::string n = contacts[i].get_nickname();
		if (f.size() >= 10) f = f.substr(0, 9) + '.';
		if (l.size() >= 10) l = l.substr(0, 9) + '.';
		if (n.size() >= 10) n = n.substr(0, 9) + '.';
		std::cout << std::setw(10) << i + 1 << "|"
		<< std::setw(10) << f << "|" << std::setw(10) << l << "|"
		<< std::setw(10) << n << std::endl;
	}
}

void PhoneBook::display_contact_details(int index) const {
	if (contacts[index].get_firstname().empty()) {
		std::cout << "Please enter a correct user index" << std::endl;
		return;
	}
	const Contact& contact = contacts[index];
	std::cout << "First Name : " << contact.get_firstname() << std::endl;
	std::cout << "Last Name : " << contact.get_lastname() << std::endl;
	std::cout << "Nickname : " << contact.get_nickname() << std::endl;
	std::cout << "Phone Number : " << contact.get_phone_number() << std::endl;
	std::cout << "Darkest Secret : " << contact.get_secret() << std::endl;
	std::cout << "Enter your next command : " << std::endl;
	return;
}

std::string get_valid_input(const std::string& prompt){
	std::string inp;
	while (!std::cin.eof() && inp.empty()){
		std::cout << prompt << std::endl;
		std::getline(std::cin >> std::ws, inp);
	}
	return (inp);
}

std::string get_valid_number(const std::string& prompt){
	std::string inp;
	int d = 0;
	while (((std::cin && inp.empty()) || !d)){
		if (std::cin)
			std::cout << prompt << std::endl;
		std::getline(std::cin >> std::ws, inp);
	int n;
	for (int i = 0; i < inp.size();i++){
		if (!isnumber(inp[i])){
			std::cout << "Please enter a valid phone number" << std::endl;
			d = 2;
			break ;
		}
	}
	(d == 2) ? (d = 0 ): (d = 1);
	}
	return (inp);
}

int PhoneBook::check_contact(int index) const {
		if (!this->track){
			std::cout << "You got no contacts in the list" << std::endl;
			return (0);
		}
		else if (contacts[index].get_firstname().empty()){
			std::cout << "Please enter a correct index for the existing users" << std::endl;
			return (0);
		}
	return (1);
}

int PhoneBook::check_number(std::string x){
	if (x.size() != 1)
		return (-1);
	int s;
	s = x[0] - '0';
	return (s);
}