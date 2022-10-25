/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaszanane <anaszanane@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 22:17:35 by anaszanane        #+#    #+#             */
/*   Updated: 2022/08/18 09:00:34 by anaszanane       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

void randomChump(std::string name)
{
	Zombie	RandomChump;

	RandomChump.setName(name);
	RandomChump.announce();

	return ;
}