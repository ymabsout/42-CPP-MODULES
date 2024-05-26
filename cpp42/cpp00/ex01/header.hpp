/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:35:47 by ymabsout          #+#    #+#             */
/*   Updated: 2024/05/25 14:44:05 by ymabsout         ###   ########.fr       */
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
		int		index;
		void	set_name(std::string l, int o){
			if (o == 1)
				first_name = l;
			else if (o == 2)
				last_name = l;
			else if (o == 3)
				nickname = l;
			else if (o == 4)
				phone_number = l;
			else
			 	secret = l;
		}
		std::string	get_val(int o){
			if (o == 1)
				return (first_name);
			else if (o == 2)
				return (last_name);
			else if (o == 3)
				return (nickname);
			else if (o == 4)
				return (phone_number);
			else
			 	return (secret);
		}
};

class phonebook{
	public:
	contact p[7];
};