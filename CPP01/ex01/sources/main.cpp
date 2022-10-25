/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaszanane <anaszanane@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 09:18:51 by anaszanane        #+#    #+#             */
/*   Updated: 2022/08/18 09:44:16 by anaszanane       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"


Zombie*	zombieHorde(int N, std::string name);

int	main(void)
{
	Zombie* heapZombie;

	heapZombie = zombieHorde(10, "Anas");
	delete [] heapZombie;

	heapZombie = zombieHorde(-1, "Anas");
	heapZombie = zombieHorde(0, "Anas");

	heapZombie = zombieHorde(15, "Tarchimb");
	delete [] heapZombie;
	
	return (0);	
}
