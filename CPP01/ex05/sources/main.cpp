/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaszanane <anaszanane@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:46:02 by anaszanane        #+#    #+#             */
/*   Updated: 2022/08/30 15:04:21 by anaszanane       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int	main(void)
{
	Harl	Harl;

	Harl.complain("DEBUG");
	std::cout << std::endl;

	Harl.complain("INFO");
	std::cout << std::endl;

	Harl.complain("WARNING");
	std::cout << std::endl;

	Harl.complain("ERROR");
	std::cout << std::endl;

	Harl.complain("");
	std::cout << std::endl;

	Harl.complain("ERRORF");

	return (0);
}
