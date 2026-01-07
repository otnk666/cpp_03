/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 20:24:47 by skomatsu          #+#    #+#             */
/*   Updated: 2026/01/06 19:51:29 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
}

FragTrap::~FragTrap()
{
    std::cout <<"FragTrap " << this->_name << " is destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return (*this);
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor called" << std::endl;
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    if (_hit_points <= 0 || _energy_points <= 0)
    {
        std::cout << "FragTrap " << _name << " tries to doing a high five, but has no hit or energy points!" << std::endl;
        return;
    }
    std::cout << "FragTrap " << _name << " Give me a high five, guys!!" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
    if (_hit_points <= 0 || _energy_points <= 0)
    {
        std::cout << "FragTrap " << _name
                << " tries to attack, but has no hit or energy points!"
                << std::endl;
        return;
    }

    _energy_points--;
    
    std::cout << "FragTrap : " << _name << " attacks " << target 
            <<" for " << _attack_damage << " damage!" << std::endl;
 
}
