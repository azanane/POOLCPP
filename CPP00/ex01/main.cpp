/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaszanane <anaszanane@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:42:15 by anaszanane        #+#    #+#             */
/*   Updated: 2022/04/05 16:07:58 by anaszanane       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

int	main(int ac, char **av)
{
	PhoneBook	phonebook;

	while (1)
	{
		std::string str1;

		std::cout << "Waiting for an instruction(ADD, SEARCH or EXIT): ";
		std::cin >> str1;

		if (str1.compare("ADD") == 0)
			add_contact();
		// else if (str1.compare("SEARCH") == 0)
		// 	search_contact();
		else if (str1.compare("EXIT") == 0)
			break ;
	}
	
	return (0);
}
