/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palu <palu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:14:32 by palu              #+#    #+#             */
/*   Updated: 2025/02/22 19:52:55 by palu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	_contact[8];
		int		index;
		int		contact_count;
	public:
		PhoneBook();
		~PhoneBook();
		Contact	getcontact(int i);
		int		get_index();
		int		get_contact_count();
		int		set_contact(Contact contact);
		void	display(int i);
		int		display_all(int contact_index);
	};

#endif