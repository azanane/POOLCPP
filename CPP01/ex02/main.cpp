/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaszanane <anaszanane@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 09:49:17 by anaszanane        #+#    #+#             */
/*   Updated: 2022/08/18 16:24:44 by anaszanane       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";

	std::string*	stringPTR = &string;
	std::string&	stringREF = string;
	
	std::cout << &string << '\n' << &stringPTR << '\n' << &stringREF << '\n';

	std::cout << string << '\n' << *stringPTR << '\n' << stringREF << '\n';

	return (0);
}
