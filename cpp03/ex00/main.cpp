#include "ClapTrap.hpp"

int main()
{
    ClapTrap    clap("clap");

    clap.display();

    clap.attack("bob");
    clap.beRepaired(1);
    clap.display();
    clap.takeDamage(15);
    clap.display();

    std::cout << "========action null========" << std::endl;
    for(int i(0); i < 15; i++)
        clap.attack("bob");
    clap.beRepaired(5);
    return 0;
}