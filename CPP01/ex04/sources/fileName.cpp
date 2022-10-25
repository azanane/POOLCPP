/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileName.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaszanane <anaszanane@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 09:43:12 by anaszanane        #+#    #+#             */
/*   Updated: 2022/08/30 10:48:08 by anaszanane       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fileName.hpp"

fileName::fileName(std::ifstream& filename, std::ofstream& filename_replace, std::string& s1, std::string& s2) : _filename(filename), _filename_replace(filename_replace), _s1(s1), _s2(s2) {

	std::string	content_tmp;

	while (std::getline(this->_filename, content_tmp))
	{
		this->_filename_content.append(content_tmp);
		this->_filename_content.append("\n");
	}
	this->_filename.close();
	
	return ;
};

fileName::~fileName(void) {

	this->_filename.close();
	this->_filename_replace.close();
	
	return ;
};

void	fileName::replace_filestream(void) {	

	int	return_find;

	return_find = this->_filename_content.find(this->_s1);
	while (return_find != -1) {

		this->_filename_content.erase(return_find, this->_s1.size());
		this->_filename_content.insert(return_find, this->_s2);
		return_find = this->_filename_content.find(this->_s1);
	}
	
	this->_filename_replace << this->_filename_content;
	this->_filename_replace.close();

	return ;
}