/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palu <palu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 13:10:39 by palu              #+#    #+#             */
/*   Updated: 2024/12/14 17:59:11 by palu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact PhoneBook::getcontact(int i)
{
	return (list_contact[i]);
}

void	PhoneBook::addcontact(const Contact& c)
{
	index++;
	list_contact[index] = c;
	if (index == 7)
		index = -1;
}