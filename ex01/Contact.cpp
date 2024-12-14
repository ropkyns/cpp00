/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palu <palu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 13:10:10 by palu              #+#    #+#             */
/*   Updated: 2024/12/14 18:02:11 by palu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::afficher()
{
	std::cout<<first_name<<" "<<last_name<<", dit "<<nickname<<" est joignable au "<<phone_number<<"je ne vous dirais pas que son secret est "<<darkest_secret<<std::endl;
}