/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaszanane <anaszanane@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:41:53 by anaszanane        #+#    #+#             */
/*   Updated: 2022/08/30 15:33:26 by anaszanane       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl {

	private:

		void _debug( void ) const;
		void _info( void ) const;
		void _warning( void ) const;
		void _error( void ) const;
		void _other( void ) const;

		static std::string _compare[4];		

	public:

		Harl( void );
		~Harl( void );

		void complain( std::string level ) const;
	
};

#endif