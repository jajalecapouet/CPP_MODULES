/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njaros <njaros@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:06:48 by njaros            #+#    #+#             */
/*   Updated: 2022/06/02 15:05:34 by njaros           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <algorithm>
# include <iostream>

class Span
{

	public :

		//Coplien fonctions

		Span(unsigned int);
		Span( Span const & other );
		~Span();

		Span	&operator=( Span const & other );

		//Span fonctions

		void			addNumber(int);
		long int		shortestSpan()	const;
		long int		longestSpan()	const;

		//Geters

		unsigned int		getSize()	const;
		std::vector<int>	getVector()	const;

	private :

		unsigned int		_size;
		std::vector<int>	_vector;
		Span();

};

#endif