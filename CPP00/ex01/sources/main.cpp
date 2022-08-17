/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaszanane <anaszanane@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:42:15 by anaszanane        #+#    #+#             */
/*   Updated: 2022/08/17 13:54:30 by anaszanane       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.class.hpp"
#include "../includes/Contact.class.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	int			i = 0;
	int			nb_contact = 0;

	while (1)
	{
		std::string str;

		if (std::cin.eof())
			break ;

		std::cout << "Waiting for an instruction(ADD, SEARCH or EXIT): ";
		std::getline(std::cin, str);
	
		if (std::cin.eof())
			break ;

		if (str.compare("ADD") == 0)
		{
			phonebook.setContact(i);
			if (i == 7)
				i = 0;
			else
				i++;
			if (nb_contact < 8)
				nb_contact++;
		}
		else if (str.compare("SEARCH") == 0)
			phonebook.searchContact(nb_contact);
		else if (str.compare("EXIT") == 0)
			break ;
	}
	
	return (0);
}
