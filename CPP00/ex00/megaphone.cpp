/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaszanane <anaszanane@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 09:06:46 by anaszanane        #+#    #+#             */
/*   Updated: 2022/08/18 16:13:14 by anaszanane       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		int			i;

		i = 1;
		while (av[i])
		{
			for (size_t n = 0; n < strlen(av[i]); n++)
        		std::cout << (char)(toupper(av[i][n]));
			i++;
		}
		std::cout << "\n";
	}
}
