/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 19:47:19 by skomatsu          #+#    #+#             */
/*   Updated: 2026/01/07 19:47:20 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap scav1("Bob");
    ScavTrap scav2("Tom");

    scav1.attack("Enemy1");
    scav2.attack("Enemy2");

    scav1.takeDamage(2);
    scav1.beRepaired(3);

    scav2 = scav1;
    scav2.attack("Enemy1");

    return 0;
}
