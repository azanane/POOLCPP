/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaszanane <anaszanane@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:52:44 by anaszanane        #+#    #+#             */
/*   Updated: 2022/08/16 15:56:09 by anaszanane       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <iostream>
# include <string>
# include "Contact.class.hpp"

class PhoneBook {

	private:

		Contact contact[8];

	public:

		PhoneBook(void);
		~PhoneBook(void);

		void	setContact(int i);
		void	searchContact(int nb_contact) const;
};

#endif
