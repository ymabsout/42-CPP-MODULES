/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 14:44:34 by ymabsout          #+#    #+#             */
/*   Updated: 2024/05/24 18:20:06 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main ()
{
    phonebook book;
    int i;

    i = 0;
    while (true)
    {
        std::cout << "Enter your command" << std::endl;
        std::string cmd;
        std::cin >> cmd;
        if (cmd == "ADD"){
            if (i >7)
                i = 0;
            contact t;
            std::string a,b,c,d,e;
            std::cout << "Enter User First Name"  << std::endl;
            getline(std::cin >> std::ws, a);
            book.p[i].first_name.assign(a);
            std::cout << "Enter User Last Name"  << std::endl;
            getline(std::cin >> std::ws, b);
            book.p[i].last_name = b;
            std::cout << "Enter User Nickname"  << std::endl;
            getline(std::cin >> std::ws, c);
            book.p[i].nickname = c;
            std::cout << "Enter Phone Number" << std::endl;
            getline(std::cin >> std::ws, d);
            book.p[i].phone_number = d;
            std::cout << "Enter Your Darkest secrect" << std::endl;
            getline(std::cin >> std::ws, e);
            book.p[i].secret = e;
            i++;
        }
        else if (cmd == "SEARCH"){
            for (int j = 0; j < i ; j++){
                std::string f = book.p[j].first_name;
                std::cout << f << std::endl;
                std::string l = book.p[j].last_name;
                std::string n = book.p[j].nickname;
                if (f.size() >= 10){
                    f.resize(10);
                    f[9] = '.';
                }
                if (l.size() >= 10){
                    l.resize(10);
                    l[9] = '.';
                }
                if (n.size() >= 10){
                    n.resize(10);
                    n[9] = '.';
                }
                std::cout << std::setfill(' ') << j+1 <<  std::setw(10) << "|" << std::setw(10) << f << "|" << l << "|" << n << std::endl;
            }
            if (i){
                std::cout <<"Enter index of the contact" << std::endl;
                int k;
                std::cin >> k;
                if (k <= 0 || k > 8)
                    std::cout << "Enter a correct index";
                else
                {
                    std::cout << "First Name : " << book.p[k-1].first_name << std::endl;
                    std::cout << "Last Name : " << book.p[k-1].last_name << std::endl;
                    std::cout << "Nickname : " << book.p[k-1].nickname << std::endl;
                    std::cout << "Phone number : " << book.p[k-1].phone_number << std::endl;
                    std::cout << "Darkest Secret : " << book.p[k-1].secret << std::endl;
                }
            }
            else 
                std::cout << "Please enter a user" << std::endl;
        }
        else if (cmd == "EXIT")
            exit(0);
        else
            std::cout <<  "invalid input" << std::endl;
    }
}