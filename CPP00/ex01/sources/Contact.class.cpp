/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaszanane <anaszanane@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:20:25 by anaszanane        #+#    #+#             */
/*   Updated: 2022/08/17 13:59:03 by anaszanane       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.class.hpp"

Contact::Contact(void) {
	
	return ;
};

Contact::~Contact(void) {
	
	return ;
};

int	Contact::check_empty_str(std::string str) const
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] != 32)
			return (0);
	}
	
	return (1);
}

int		Contact::check_digit(std::string phone_number) const 
{
	for (size_t i = 0; i < phone_number.length(); i++)
	{
		if (std::isdigit(phone_number[i]) == 0)
			return (0);
	}
	
	return (1);
}

void	Contact::add_contact(int i)
{
	std::string	str;

	this->index = i;

	std::cout << "Add a first name: ";
	std::getline(std::cin, this->first_name);
	if (std::cin.eof())
		return ;
	while (check_empty_str(this->first_name) == 1)
	{
		std::cout << "A contact need a first name.\nAdd a first name: ";
		std::getline(std::cin, this->first_name);
		if (std::cin.eof())
			return ;
	}

	std::cout << "Add a last name: ";
	std::getline(std::cin, this->last_name);
	if (std::cin.eof())
		return ;
	while (check_empty_str(this->last_name) == 1)
	{
		std::cout << "A contact need a last name.\nAdd a last name: ";
		std::getline(std::cin, this->last_name);
		if (std::cin.eof())
			return ;
	}

	std::cout << "Add a nickname: ";
	std::getline(std::cin, this->nickname);
	if (std::cin.eof())
		return ;
	while (check_empty_str(this->nickname) == 1)
	{
		std::cout << "A contact need a nickname.\nAdd a nickname: ";
		std::getline(std::cin, this->nickname);
		if (std::cin.eof())
			return ;
	}

	std::cout << "Add a phone number: ";
	std::getline(std::cin, this->phone_number);
	if (std::cin.eof())
		return ;
	while (check_empty_str(this->phone_number) == 1 || check_digit(this->phone_number) == 0)
	{
		std::cout << "A contact need a phone number (only digitals characters are accepted).\nAdd a phone number: ";
		std::getline(std::cin, this->phone_number);
		if (std::cin.eof())
			return ;
	}

	std::cout << "To finish, add his darkest secret: ";
	std::getline(std::cin, this->darkest_secret);
	if (std::cin.eof())
		return ;
	while (check_empty_str(this->darkest_secret) == 1)
	{
		std::cout << "A contact need a secret.\nAdd his darkest secret: ";
		std::getline(std::cin, this->darkest_secret);
		if (std::cin.eof())
			return ;
	}
}

std::string	Contact::getAttribute(int i) const
{
	if (i == 1)
		return this->first_name;
	if (i == 2)
		return this->last_name;
	if (i == 3)
		return this->nickname;
	if (i == 4)
		return this->darkest_secret;

	return NULL;
}

void	Contact::affContact(void) const
{
	std::cout << this->index << "         |";

	if (this->first_name.length() > 10)
		std::cout << this->first_name.substr(0, 9) << ".|";
	else if (this->first_name.length() < 10)
	{
		std::cout << this->first_name;
		for (size_t i = 0; i < 10 - this->first_name.length(); i++)
			std::cout << ' ';
		std::cout << '|';
	}
	else
		std::cout << this->first_name << '|';

	
	if (this->last_name.length() > 10)
		std::cout << this->last_name.substr(0, 9) << ".|";
	else if (this->last_name.length() < 10)
	{
		std::cout << this->last_name;
		for (size_t i = 0; i < 10 - this->last_name.length(); i++)
			std::cout << ' ';
		std::cout << '|';
	}
	else
		std::cout << this->last_name << '|';
	
	
	if (this->nickname.length() > 10)
		std::cout << this->nickname.substr(0, 9) << ".|\n";
	else if (this->nickname.length() < 10)
	{
		std::cout << this->nickname;
		for (size_t i = 0; i < 10 - this->nickname.length(); i++)
			std::cout << ' ';
		std::cout << "|\n";
	}
	else
		std::cout << this->nickname << "|\n";
	
	return ;
}

void	Contact::affContactAll(void) const
{
	std::cout << "First Name : " << this->first_name << '\n';
	std::cout << "Last Name : " << this->last_name << '\n';
	std::cout << "Nickname : "	<< this->nickname << '\n';
	std::cout << "Phone Number : " << this->phone_number << '\n';
	std::cout << "Darkest Secret : " << this->darkest_secret << '\n';
}
