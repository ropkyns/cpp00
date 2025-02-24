/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 13:10:10 by palu              #+#    #+#             */
/*   Updated: 2025/02/24 14:26:27 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

int	Contact::addcontact(Contact *contact)
{
	std::string		input;

	std::cout << "First Name : ";
	while(input.length() < 1)
		if (!(std::getline(std::cin, input)))
			return (1);
	contact->first_name = input;
	input.erase();
	std::cout << "Last Name : ";
	while(input.length() < 1)
		if (!(std::getline(std::cin, input)))
			return (1);
	contact->last_name = input;
	input.erase();
	std::cout << "Nick Name : ";
	while(input.length() < 1)
		if (!(std::getline(std::cin, input)))
			return (1);
	contact->nickname = input;
	input.erase();
	std::cout << "Phone Number : ";
	while(input.length() < 1)
		if (!(std::getline(std::cin, input)))
			return (1);
	contact->phone_number = input;
	input.erase();
	std::cout << "Darkest Secret : ";
	while(input.length() < 1)
		if (!(std::getline(std::cin, input)))
			return (1);
	contact->secret = input;
	input.erase();
	return (0);
}

void	Contact::list_contact(int i)
{
	std::cout << std::right << "|" << std::setw(10) << (i + 1) << "|";
	if (first_name.size() > 10)
		std::cout << std::right << std::setw(9) << first_name.substr(0, 9) << "." << "|";
	else
		std::cout << std::right << std::setw(10) << first_name.substr(0, 10) << "|";
	if (last_name.size() > 10)
		std::cout << std::right << std::setw(9) << last_name.substr(0, 9) << "." << "|";
	else
		std::cout << std::right << std::setw(10) << last_name.substr(0, 10) << "|";
	if (nickname.size() > 10)
		std::cout << std::right << std::setw(9) << nickname.substr(0, 9) << "." << "|" << std::endl;
	else
		std::cout << std::right << std::setw(10) << nickname.substr(0, 10) <<"|" << std::endl;
	
}

void	Contact::show_contact()
{
	std::cout << "___________________________________________" << std::endl;
	std::cout << "First name: " << first_name << std::endl;
	std::cout << "Last name: "<< last_name << std::endl;
	std::cout << "Nick name: "<< nickname << std::endl;
	std::cout << "Phone number: "<< phone_number << std::endl;
	std::cout << "Darkest secret: "<< secret << std::endl;
	std::cout << "___________________________________________" << std::endl;
}