/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palu <palu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 13:10:39 by palu              #+#    #+#             */
/*   Updated: 2025/02/22 20:38:12 by palu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
	contact_count = 0;
	return ;
}

PhoneBook::~PhoneBook()
{
	return ;
}

int	PhoneBook::get_index()
{
	return (index);
}

int	PhoneBook::get_contact_count()
{
	return (contact_count);
}

int	PhoneBook::set_contact(Contact contact)
{
	if (index + 1 > 8)
		index = 0;
	if (contact.addcontact(&_contact[index]))
		return (1);
	index++;
	if (contact_count < 8)
		contact_count++;
	return (0);
}

void	PhoneBook::display(int i)
{
	_contact[i].show_contact();
}

int	PhoneBook::display_all(int contact_index)
{
	if (contact_count == 0)
	{
		std::cout << "No contacts in the phonebook" << std::endl;
		return (1);
	}
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	for (int i = 0; i < contact_count; i++)
	{
		_contact[i].list_contact(i);
	}
	std::cout << "___________________________________________" << std::endl;
	return (0);
}