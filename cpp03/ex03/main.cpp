#include "DiamondTrap.hpp"

int main()
{
     ClapTrap    Zoe("zoe");

    DiamondTrap Bob("bob");
     Bob.whoAmI();
     Bob.display();
     Bob.takeDamage(90);
     Bob.beRepaired(1);
     Bob.guardGate();
     Bob.highFivesGuys();
     Bob.display();

    std::cout << "=======Attack=======" << std::endl;
     for(int i(0); i < 50; i++)
         Bob.attack("zoe");
     Bob.display();

    ClapTrap clap = DiamondTrap("zoe");
    clap.display();

    DiamondTrap d;
    d = DiamondTrap("bob");

    d.whoAmI();

    FragTrap f = d;
    f.display();

    return 0;
}