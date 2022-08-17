/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaszanane <anaszanane@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 10:31:30 by anaszanane        #+#    #+#             */
/*   Updated: 2022/08/17 13:57:09 by anaszanane       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) {

	return ;
};

PhoneBook::~PhoneBook(void) {

	return ;
};

void	PhoneBook::setContact(int i) 
{
	this->contact[i].add_contact(i);

	return ;
}

void	PhoneBook::searchContact(int nb_contact) const 
{
	if (nb_contact == 0) {

		std::cout << "Need at least one contact for this command.\n";
		return ;
	}

	std::cout << "\nGot the following informations :\n";
	std::cout << "\nIndex     |FirstName |LastName  |Nickname  |\n\n";
	for (int i = 0; i < nb_contact; i++)
		this->contact[i].affContact();

	
	std::string	index;
	int			problem = 0;

	std::cout << "\nEnter the index of a contact in order to see all informations : ";
	std::getline(std::cin, index);
	if (std::cin.eof())
		return ;
	std::cout << '\n';

	if (index[0] == 0)
		problem = 1;
	else
	{
		for (size_t i = 0; i < index.length(); i++) {

			if (std::isdigit(index[i]) == 0)
				problem = 2;		
		}
	}

	if (problem == 1)
		return ;
	if (problem == 0 && std::stoi(index) >= 0 && std::stoi(index) <= 8)
		this->contact[std::stoi(index)].affContactAll();
	else if (problem == 2 || std::stoi(index) < 0 || std::stoi(index) > 8)
		std::cout << "Wrong argument.\n";
		
	return ;
}