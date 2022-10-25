/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaszanane <anaszanane@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:57:33 by anaszanane        #+#    #+#             */
/*   Updated: 2022/08/18 18:45:36 by anaszanane       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon(void) {

	return ;
};

Weapon::Weapon(std::string type) {

	this->_type = type;

	return ;
};

Weapon::~Weapon(void) {

	return ;	
};

std::string const & Weapon::getType(void) {

	std::string const & typeRef = this->_type;

	return typeRef;
}

void	Weapon::setType(std::string typeNew) {

	this->_type = typeNew;

	return ;
}