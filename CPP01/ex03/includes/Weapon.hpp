/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaszanane <anaszanane@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:38:40 by anaszanane        #+#    #+#             */
/*   Updated: 2022/08/18 18:25:30 by anaszanane       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon {

	private :

		std::string	_type;

		Weapon(void);

	public :

		Weapon(std::string type);
		~Weapon(void);

		std::string const &	getType();
		void				setType(std::string typeNew);
	
};

#endif
