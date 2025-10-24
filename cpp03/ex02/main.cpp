#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{

    ClapTrap Annes("annes");
    FragTrap Julie("julie");
    FragTrap Bob(Julie);

    std::cout << "------Before attack-------" << std::endl;
    Annes.display();
    Julie.display();
    Bob.display();

    std::cout << "------attack-------" << std::endl;
    Julie.attack("kevin");
    Julie.display();

    Julie.takeDamage(50);
    Julie.beRepaired(1);
    Julie.display();
    Julie.highFivesGuys();
    for (int i(0); i < 101; i++)
    {
        Julie.attack("kevin");
    }

    std::cout << "-------after attack------" << std::endl;
    Julie.display();
    Julie.highFivesGuys();
    Julie.takeDamage(5);
    Julie.beRepaired(3);

    return (0);
}