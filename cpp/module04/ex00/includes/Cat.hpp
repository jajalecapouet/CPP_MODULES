/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njaros <njaros@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 10:47:04 by njaros            #+#    #+#             */
/*   Updated: 2022/05/23 17:42:47 by njaros           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public :

		Cat( void );
		Cat( std::string name );
		Cat( Cat const& other );
		virtual ~Cat( void );

		using Animal::operator=;

		virtual void	makeSound( void )	const;

	private :

};

#endif