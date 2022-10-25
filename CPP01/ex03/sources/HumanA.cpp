/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaszanane <anaszanane@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:16:29 by anaszanane        #+#    #+#             */
/*   Updated: 2022/08/18 18:57:51 by anaszanane       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string nameA, Weapon& weaponA) : _weaponA(weaponA) {

	this->_nameA = nameA;

	return ;	
};

HumanA::~HumanA(void) {

	return ;
}

void	HumanA::attack(void) const {

	std::cout << this->_nameA << " attacks with their " << _weaponA.getType() << '\n';

	return ;
}
