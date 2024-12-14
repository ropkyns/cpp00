/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palu <palu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:23:18 by palu              #+#    #+#             */
/*   Updated: 2024/12/14 18:00:44 by palu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	std::string input;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	PhoneBook p;

	while (true)
	{
		std::cout << "Enter a command (ADD, SEARCH and EXIT)" << std::endl;
		if (!(std::getline(std::cin, input)))
			return (1);
		if (input == "ADD")
		{
			std::cout << "Enter a first name" << std::endl;
			if (!(getline(std::cin, first_name)))
				break ;
			std::cout << "Enter a last name" << std::endl;
			if (!(getline(std::cin, last_name)))
				break ;
			std::cout << "Enter a nickname" << std::endl;
			if (!(getline(std::cin, nickname)))
				break ;
			std::cout << "Enter a phone number" << std::endl;
			if (!(getline(std::cin, phone_number)))
				break ;
			std::cout << "Enter the darkest secret" << std::endl;
			if (!(getline(std::cin, darkest_secret)))
				break ;
			Contact c(first_name, last_name, nickname, phone_number, darkest_secret);
			c.afficher();
			p.addcontact(c);
		}
	}
}