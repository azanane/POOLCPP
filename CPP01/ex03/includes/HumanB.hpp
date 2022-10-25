/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaszanane <anaszanane@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:34:38 by anaszanane        #+#    #+#             */
/*   Updated: 2022/08/18 18:56:37 by anaszanane       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB {

	private :

		std::string		_nameB;
		Weapon*			_weaponB;

	public :

		HumanB(std::string _nameB);
		~HumanB(void);

		void	attack() const;
		void	setWeapon(Weapon weaponB);
	
};

#endif
