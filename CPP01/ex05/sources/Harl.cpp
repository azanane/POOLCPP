/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaszanane <anaszanane@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:03:58 by anaszanane        #+#    #+#             */
/*   Updated: 2022/08/30 15:04:08 by anaszanane       ###   ########.fr       */
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

	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void Harl::_info( void ) const {

	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void Harl::_warning( void ) const {

	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_error( void ) const {

	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) const {

	void	(Harl::*which_complain[4])(void) const = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

	int	search = -1;
	for (int i = 0; i < 4; i++) {
		
		if (level.compare(Harl::_compare[i]) == 0)
			search = i;
	}

	if (search == -1) {

		std::cout << "Level need to be \"DEBUG\", \"INFO\", \"WARNING\" or \"ERROR\"." << std::endl;
		return ;
	}

	(this->*which_complain[search])();		
}
