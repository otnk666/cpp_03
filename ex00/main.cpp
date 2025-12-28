#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap clap1("Bob");
    ClapTrap clap2("Tom");

    clap1.attack("Enemy1");
    clap1.attack("Enemy2");

    clap1.takeDamage(2);
    clap1.beRepaired(3);

    clap2 = clap1;
    clap2.attack("Enemy1");

    return 0;
}
