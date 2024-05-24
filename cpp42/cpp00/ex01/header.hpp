/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:35:47 by ymabsout          #+#    #+#             */
/*   Updated: 2024/05/24 18:19:29 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

class contact {
	private:
		std::string secret;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
	public:
		int			index;
};


class phonebook{
	public:
	contact p[7];
};