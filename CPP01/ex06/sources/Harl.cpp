/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaszanane <anaszanane@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:03:58 by anaszanane        #+#    #+#             */
/*   Updated: 2022/08/30 15:49:53 by anaszanane       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

std::string Harl::_compare[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

Harl::Harl(void) {

	return ;
};

Harl::~Harl(void) {

	return ;
};

void Harl::_debug( void ) const {

	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do !" << std::endl << std::endl;
}

void Harl::_info( void ) const {

	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl << std::endl;
}

void Harl::_warning( void ) const {

	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void Harl::_error( void ) const {

	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable,\nI want to speak to the manager now." << std::endl << std::endl;
}

void Harl::_other( void ) const {

	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl << std::endl;
}

void Harl::complain(std::string level) const {

	void	(Harl::*which_complain[5])(void) const = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error, &Harl::_other};

	int	search = -1;
	for (int i = 0; i < 4; i++) {
		
		if (level.compare(Harl::_compare[i]) == 0)
			search = i;
	}

	switch (search) {

		case -1:
			(this->*which_complain[4])();
			return ;
		default:
			for (int i = 0; i + search < 4; i++)
				(this->*which_complain[i + search])();
	}		
}
