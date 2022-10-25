/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaszanane <anaszanane@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:51:31 by anaszanane        #+#    #+#             */
/*   Updated: 2022/08/18 18:58:01 by anaszanane       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class	HumanA {

	private :

		std::string		_nameA;
		Weapon&			_weaponA;

	public :

		HumanA(std::string nameA, Weapon& weaponA);
		~HumanA(void);

		void	attack(void) const;
	
};

#endif