/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaszanane <anaszanane@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:55:30 by anaszanane        #+#    #+#             */
/*   Updated: 2022/08/18 18:57:38 by anaszanane       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string nameB) {

	this->_nameB = nameB;

	return ;	
};

HumanB::~HumanB(void) {

	return ;
}

void	HumanB::attack(void) const {

	std::cout << this->_nameB << " attacks with their " << _weaponB->getType() << '\n';

	return ;
}

void	HumanB::setWeapon(Weapon weaponB) {

	this->_weaponB = &weaponB;

	return ;
}
