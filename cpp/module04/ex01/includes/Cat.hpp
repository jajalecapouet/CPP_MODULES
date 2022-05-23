/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njaros <njaros@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 10:48:02 by njaros            #+#    #+#             */
/*   Updated: 2022/05/23 10:48:03 by njaros           ###   ########lyon.fr   */
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

		virtual void	makeSound( void )	const;

	private :


};

#endif