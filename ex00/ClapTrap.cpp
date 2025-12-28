#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor called" << std::endl;
    _hit_points = 10;
    _energy_points = 10;
    _attack_damage = 0;
}

ClapTrap::ClapTrap(const std::string &name)
{
    std::cout << "ClapTrap constructor called" << std::endl;
    _name = name;
    _hit_points = 10;
    _energy_points = 10;
    _attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    this->_name = other._name;
    this->_hit_points = other._hit_points;
    this->_energy_points = other._energy_points;
    this->_attack_damage = other._attack_damage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) 
{
    std::cout << "ClapTrap Copy Assignment Operator called" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this->_hit_points = other._hit_points;
        this->_energy_points = other._energy_points;
        this->_attack_damage = other._attack_damage;
    }
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (_hit_points <= 0 || _energy_points <= 0)
    {
        std::cout << "ClapTrap : " << _name
                << " tries to attack, but has no hit points or energy points!"
                << std::endl;
        return;
    }

    _energy_points--;
    
    std::cout << "ClapTrap : " << _name << " attacks " << target 
            <<", causing " << _attack_damage << " points of damage!" << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hit_points >= amount)
        this->_hit_points -= amount;
    else
        this->_hit_points = 0;
    std::cout << "ClapTrap : " << _name << " takes " << amount << "points damage!" << std::endl;
    std::cout << _name << " : HP " << _hit_points <<", Energy points " << _energy_points <<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energy_points > 0 && _hit_points > 0)
    {
        this->_hit_points += amount;
        _energy_points--;
        std::cout << "ClapTrap : " << _name << " is repaired "
            << amount << "points!" << std::endl;
        std::cout << _name << " : HP " << _hit_points <<", Energy points " << _energy_points <<std::endl;
    }
    else
    {
        std::cout << "ClapTrap : " << _name << " has no energy points!" << std::endl;
        std::cout << _name << " : HP " << _hit_points <<", Energy points " << _energy_points <<std::endl;
    }
}


