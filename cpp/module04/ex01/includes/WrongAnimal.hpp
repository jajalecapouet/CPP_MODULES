/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njaros <njaros@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 10:48:08 by njaros            #+#    #+#             */
/*   Updated: 2022/05/23 10:48:11 by njaros           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	public :

		WrongAnimal( void );
		WrongAnimal( std::string name );
		WrongAnimal( WrongAnimal const& other );
		virtual ~WrongAnimal( void );

		std::string			getName( void )	const;
		void				setName( std::string name );
		void		makeSound( void )	const;

	private :

		std::string	_name;

	protected :

		std::string	type;

};

#endif