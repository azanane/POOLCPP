/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaszanane <anaszanane@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:52:44 by anaszanane        #+#    #+#             */
/*   Updated: 2022/04/05 16:02:31 by anaszanane       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <iostream>

class PhoneBook {

	private:
		
		char	*book[41];

	public:

		PhoneBook(void);
		~PhoneBook(void);
		
		void	add_contact(void);
		int		check_empty_str(std::string	str);
};

#endif
