/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaszanane <anaszanane@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 21:51:15 by anaszanane        #+#    #+#             */
/*   Updated: 2022/08/18 16:50:35 by anaszanane       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie (void) {
	
	return ;
};

Zombie::~Zombie (void) {

	std::cout << this->_name << " Died.\n";

	return ;
}

void	Zombie::announce(void) {

	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";

	return ;
}

void	Zombie::setName(std::string name) {

	this->_name = name;

	return ;
}