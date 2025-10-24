#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap    Bob("bob");
    ScavTrap    Raphael("raphael");
    ScavTrap    Zoe("zoe");

    ClapTrap clap = ScavTrap("Alice");

    clap.display();

    std::cout << "=======Before attack========" << std::endl;
    std::cout << "======Bob======" << std::endl;
    Bob.display();
    Bob.takeDamage(10);
    Bob.beRepaired(5);
    std::cout << "=======Zoe======" << std::endl;
    Zoe.display();
    Zoe.takeDamage(90);
    Zoe.beRepaired(1);
    Zoe.guardGate();
    Zoe.display();
    std::cout << "=========Attack==========" << std::endl;
    for(int i(0); i < 51; i++)
        Zoe.attack("raphael");
    Zoe.guardGate();
    Zoe.display();
    return 0;
}