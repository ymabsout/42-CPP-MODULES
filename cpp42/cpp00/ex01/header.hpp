/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:35:47 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/03 20:33:25 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <array>
#include <fstream>
class Contact {
private:
    std::string secret;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
public:
    void set_firstname(const std::string&);
    void set_lastname(const std::string&);
    void set_nickname(const std::string&);
    void set_phone_number(const std::string&);
    void set_secret(const std::string&);
    std::string get_firstname() const;
    std::string get_lastname() const;
    std::string get_nickname() const;
    std::string get_phone_number() const;
    std::string get_secret() const;
};

class PhoneBook {
private:
    std::array<Contact, 8> contacts;
    int current_index;
public:
    PhoneBook() : current_index(0) {}
    void add_contact(const Contact&);
    void display_contacts() const;
    void display_contact_details(int index) const;
    int check_contact(int index) const;
};
std::string get_valid_input(const std::string& prompt);
std::string get_valid_number(const std::string& prompt);


#endif
