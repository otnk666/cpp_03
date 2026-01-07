#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    std::cout << "=== FragTrap Tests ===" << std::endl;
    FragTrap frag1("Bob");
    FragTrap frag2("Tom");

    frag1.attack("Enemy1");
    frag2.attack("Enemy2");

    frag1.takeDamage(2);
    frag1.highFivesGuys();
    frag1.beRepaired(3);

    frag2 = frag1;
    frag2.attack("Enemy1");

    std::cout << "\n=== ScavTrap Tests ===" << std::endl;
    ScavTrap scav("Alice");
    scav.attack("Enemy3");
    scav.guardGate();

    return 0;
}
