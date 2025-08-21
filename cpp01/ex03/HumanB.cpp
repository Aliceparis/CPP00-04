#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _arm(NULL)
{
}

HumanB::~HumanB()
{
}
void    HumanB::setWeapon(Weapon& weapon)
{
    _arm = &weapon;
}
void    HumanB::attack()
{
    std::cout << _name << " attacks with their " << _arm->getType() << std::endl;
}