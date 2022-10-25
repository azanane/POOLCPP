/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileName.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaszanane <anaszanane@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 09:43:25 by anaszanane        #+#    #+#             */
/*   Updated: 2022/08/30 12:42:05 by anaszanane       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILENAME_HPP
# define FILENAME_HPP

# include <iostream>
# include <fstream>

class fileName {
	
	private:
		
		std::ifstream&	_filename;
		std::ofstream&	_filename_replace;
		
		std::string		_filename_content;
		std::string&	_s1;
		std::string&	_s2;

		std::string		_swap;

		std::string		_newContent;

	public:

		fileName(std::ifstream& filename, std::ofstream& filename_replace, std::string& s1, std::string& s2);
		~fileName(void);

		void	replace_filestream(void);
};


#endif