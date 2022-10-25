/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaszanane <anaszanane@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 21:25:40 by anaszanane        #+#    #+#             */
/*   Updated: 2022/08/30 10:48:15 by anaszanane       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fileName.hpp"

int	main(int ac, char **av)
{
	if (ac != 4) {

		std::cout << "Wrong number of arguments (need a filename and two strings)\n";
		return (1);	
	}
	else
	{
		std::string	name(av[1]);
		std::string	s1(av[2]);
		std::string	s2(av[3]);

		std::ifstream	nameFile;
		std::ofstream	nameFile_replace;

		nameFile.open(name);
		if (nameFile.fail()) {
			
			std::cout << "Wrong filename (first argument).\n";
			return (1);
		}

		nameFile_replace.open(name + ".replace");
		if (nameFile_replace.fail()) {
			
			std::cout << "Wrong filename (first argument).\n";
			nameFile.close();
			return (1);
		}

		fileName	filename = fileName(nameFile, nameFile_replace, s1, s2);

		filename.replace_filestream();
		
	}

	return (0);
}