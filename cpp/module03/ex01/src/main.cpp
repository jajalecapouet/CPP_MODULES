/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njaros <njaros@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 10:45:24 by njaros            #+#    #+#             */
/*   Updated: 2022/05/23 15:29:20 by njaros           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int	main(void)
{
	/*int			loop;
	ClapTrap	a;
	ClapTrap	b("njaros");
	ClapTrap	c(b);
	ClapTrap	bullier("bullier");
	ScavTrap	u;
	ScavTrap	cheese("fromage");
	ScavTrap	ham("jambon");

	loop = -1;
	while (++loop < 12)
	{
		if (a.getEp())
		{
			a.attack(b.getName());
			b.takeDamage(a.getAd());
		}
		else
			a.attack(b.getName());
	}
	c.takeDamage(80);
	loop = -1;
	while (++loop < 10)
	{
		bullier.attack(c.getName());
		c.takeDamage(bullier.getAd());
		c.beRepaired(3);
	}
	b.takeDamage(9);
	bullier.takeDamage(9);
	bullier.beRepaired(9);
	loop = -1;
	while (++loop < 11)
		b.beRepaired(2);
	u.beRepaired(1);
	cheese.attack(ham.getName());
	ham.takeDamage(ham.getAd());
	ScavTrap	ham2(ham);
	ham2.beRepaired(190);
	ham2.guardGate();
	ham.guardGate();*/
	ScavTrap	a("A");
	ScavTrap	b("B");
	ClapTrap	c("C");
	ScavTrap	d;
	
	a.takeDamage(30);
	b = a;
	b.beRepaired(1);
	b.guardGate();
	return (0);
}
