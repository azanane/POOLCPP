/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaszanane <anaszanane@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 22:20:19 by anaszanane        #+#    #+#             */
/*   Updated: 2022/08/18 09:00:34 by anaszanane       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

void 	randomChump(std::string name);
Zombie*	newZombie(std::string name);

int	main(void)
{
	Zombie* heapZombie;

	randomChump("Max");
	
	heapZombie = newZombie("Anas");
	heapZombie->announce();
	delete heapZombie;

	heapZombie = newZombie("Brice");
	heapZombie->announce();
	delete heapZombie;

	heapZombie = newZombie("Theo");
	heapZombie->announce();
	delete heapZombie;
	
	return (0);
}