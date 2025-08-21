#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): _name(name), _arm(weapon)
{
}
HumanA::~HumanA()
{
}

void    HumanA::attack()
{
    std::cout << _name << " attacks with their " << _arm.getType() << std::endl;
}