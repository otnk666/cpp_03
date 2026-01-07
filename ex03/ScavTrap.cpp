#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    _guardMode = false;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    std::cout << "ScavTrap constructor called" << std::endl;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    _guardMode = false;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    this->_guardMode = other._guardMode;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "ScavTrap Copy Assignment Operator called" << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other);
        this->_guardMode = other._guardMode;
    }
    return (*this);
}

void ScavTrap::attack(const std::string &target)
{
    if (_hit_points <= 0 || _energy_points <= 0)
    {
        std::cout << "ScavTrap " << _name
                << " tries to attack, but has no hit or energy points!"
                << std::endl;
        return;
    }

    _energy_points--;
    
    std::cout << "ScavTrap : " << _name << " attacks " << target 
            <<" for " << _attack_damage << " damage!" << std::endl;
 
}

void ScavTrap::guardGate()
{
    if (_guardMode)
    {
        std::cout << "ScavTrap " << _name << " is already in Gate keeper mode.";
    }
    else
    {
        _guardMode = true;
        std::cout << "ScavTrap " << _name << " is now in Gate keeper mode.";
    }
}
