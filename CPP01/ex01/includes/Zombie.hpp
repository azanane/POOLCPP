/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaszanane <anaszanane@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 09:08:51 by anaszanane        #+#    #+#             */
/*   Updated: 2022/08/18 16:49:39 by anaszanane       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {

	private:

		std::string	_name;

	public:

		Zombie(void);
		~Zombie(void);

		void	announce(void);
		void	setName(std::string name);
};

#endif