/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaszanane <anaszanane@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 08:33:27 by anaszanane        #+#    #+#             */
/*   Updated: 2022/08/16 20:27:33 by anaszanane       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <string>


class Contact { 
	
	private:

		int			index;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;

	public:

		Contact(void);
		~Contact(void);

		void		add_contact(int i);
		int			check_empty_str(std::string str) const;
		int			check_digit(std::string str) const;
		void		affContact(void) const;
		void		affContactAll(void) const;
		std::string	affTenChar(std::string str) const;
		std::string	getAttribute(int i) const;
		
};

#endif