/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaszanane <anaszanane@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:20:25 by anaszanane        #+#    #+#             */
/*   Updated: 2022/04/05 16:07:25 by anaszanane       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) {
	
	return ;
};

PhoneBook::~PhoneBook(void) {
	
	return ;
};

int	check_empty_str(std::string	str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] != 32)
			return (0);
	}
	
	return (1);
}

void	add_contact(void)
{
	std::string	str;

	std::cout << "Add a first name: ";
	std::cin >> str;
	while (check_empty_str(str) == 1)
	{
		std::cout << "A contact need a first name.\nAdd a first name: ";
		std::cin >> str;
	}

	std::cout << "Add a last name: ";
	std::cin >> str;
	while (check_empty_str(str) == 1)
	{
		std::cout << "A contact need a last name.\nAdd a last name: ";
		std::cin >> str;
	}

	std::cout << "Add a nickname: ";
	std::cin >> str;
	while (check_empty_str(str) == 1)
	{
		std::cout << "A contact need a nickname.\nAdd a nickname: ";
		std::cin >> str;
	}

	std::cout << "To finish, add his darkest secret: ";
	std::cin >> str;
	while (check_empty_str(str) == 1)
	{
		std::cout << "A contact need a secret.\nAdd his darkest secret: ";
		std::cin >> str;
	}
}
