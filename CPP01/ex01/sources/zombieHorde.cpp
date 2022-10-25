/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaszanane <anaszanane@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 09:05:52 by anaszanane        #+#    #+#             */
/*   Updated: 2022/08/18 09:44:16 by anaszanane       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"


Zombie*	zombieHorde(int N, std::string name)
{
	if (N > 0)
	{
		Zombie* ZombieHorde = new Zombie[N];
		
		for (int i = 0; i < N; i++) {

			ZombieHorde[i].setName(name);
			ZombieHorde[i].announce();
		}

		return ZombieHorde;
	}
	
	return NULL;
}
