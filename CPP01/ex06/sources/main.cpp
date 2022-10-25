/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaszanane <anaszanane@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:46:02 by anaszanane        #+#    #+#             */
/*   Updated: 2022/08/30 15:43:58 by anaszanane       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Need one argument" << std::endl;
		return (1);
	}
	else
	{
		Harl		Harl;
		std::string	which_complain(av[1]);
		
		Harl.complain(which_complain);
	}

	return (0);
}
