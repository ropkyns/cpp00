/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palu <palu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:14:32 by palu              #+#    #+#             */
/*   Updated: 2024/12/14 17:46:16 by palu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	list_contact[8];
		int		index;

	public:
		PhoneBook()
		{
			list_contact[8];
			index = -1;
		}
		Contact	getcontact(int i);
		void	addcontact(const Contact& c);
};

#endif