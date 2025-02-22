/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palu <palu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:23:18 by palu              #+#    #+#             */
/*   Updated: 2025/02/22 20:19:29 by palu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	std::string		input;
	PhoneBook		pb;
	int				i;

	i = 0;
	input = "";
	while (true)
	{
		std::cout << "Enter a command (ADD, SEARCH or EXIT)" << std::endl;
		if (!(std::getline(std::cin, input)))
			return (1);
		if (!input.compare("EXIT"))
			return (0);
		else if (!input.compare("ADD"))
		{
			Contact contact;
			if (pb.set_contact(contact))
				return (1);
		}
		else if (!input.compare("SEARCH"))
		{
			if (!pb.display_all(pb.get_contact_count()))
			{
				std::cout << "Enter the index of the contact you want to display" << std::endl;
				while (true)
				{
					if (!std::getline(std::cin, input))
						return (1);
					if (std::atoi(input.c_str()) <= 8 && std::atoi(input.c_str()) >= 1)
					{
						pb.display(std::atoi(input.c_str()) - 1);
						break;
					}
					else
						std::cout << "Invalid index, please enter a number between 1 and 8" << std::endl;
				}
			}
		}
		else
			std::cout << "Invalid command. Try again !" << std::endl;
	}
	return (0);
}