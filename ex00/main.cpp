/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 19:59:01 by skomatsu          #+#    #+#             */
/*   Updated: 2026/01/07 16:12:51 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap clap1("Bob");
    ClapTrap clap2("Tom");

    clap1.attack("Enemy1");
    clap1.attack("Enemy2");
    clap2.attack("Enemy1");

    clap1.takeDamage(2);
    clap1.beRepaired(1);
    
    clap2.takeDamage(5);
    clap2.beRepaired(1);
    
    clap2 = clap1;
    clap2.attack("Enemy1");

    return 0;
}
