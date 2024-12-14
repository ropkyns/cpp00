/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palu <palu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:38:19 by palu              #+#    #+#             */
/*   Updated: 2024/12/14 18:10:19 by palu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

class Contact
{
	private:
		std::string		first_name;
		std::string		last_name;
		std::string		nickname;
		std::string		phone_number;
		std::string		darkest_secret;

	public:
		Contact(){}
		Contact(std::string f, std::string l, std::string n, std::string nb, std::string s)
		{
			first_name = f;
			last_name = l;
			nickname = n;
			phone_number = nb;
			darkest_secret = s;
		}
		void	afficher();
};

#endif