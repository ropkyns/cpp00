/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palu <palu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:14:32 by palu              #+#    #+#             */
/*   Updated: 2024/12/06 15:52:38 by palu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iomanip>
#include <string>
#include <cstdlib>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact _contact[8];
		int		_index;
		bool	_full;

	public:
		PhoneBook(void);
		
};

#endif