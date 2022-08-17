/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaszanane <anaszanane@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 09:06:46 by anaszanane        #+#    #+#             */
/*   Updated: 2022/06/11 11:19:03 by anaszanane       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		std::string	input;
		int			i;

		i = 1;
		while (av[i])
		{
			input = av[i];
			std::transform(input.begin(), input.end(), input.begin(), ::toupper);
			std::cout << input;
			i++;
		}
		std::cout << "\n";
	}
}
